#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	char word[30], letter[1], secret[30];
	int size = 0, i = 0, lives = 6, hits = 0;
	bool cor_letter = false;
	
	cout << "Player 1 close the eyes and player 2 type the secret word: ";
	cin >> word;
	system("cls");
	
	while(word[i] != '\0'){
		i++;
		size++;
	}
	
	for(i = 0; i < 30; i++){
		secret[i] = '*';
	}
	
	while((lives > 0) && (hits < size)){
		cout << "Remaining lives: " << lives << "\n\n";
		cout << "Secret word: ";
		
		for(i = 0; i < size; i++){
			cout << secret[i];
		}
		
		cout << "\n\nType a letter: ";
		cin >> letter[0];
		
		for(i = 0; i < size; i++){
			if(word[i] == letter[0]){
				cor_letter = true;
				secret[i] = word[i];
				hits++;
			}
		}
		
		if(!cor_letter){
			lives--;
		}
		
		cor_letter = false;
		system("cls");
	}
	
	if(hits == size){
		cout << "You Win!!\n\n";
	}
	else {
		cout << "Too Bad! You Lose!\n\n";
	}
	
	system("pause");
	return 0;
}
