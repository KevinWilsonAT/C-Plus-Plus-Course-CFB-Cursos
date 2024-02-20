#include <iostream>

using namespace std;

int main(){
	
	int life = 0;				// integer type: 10, 25
	char letter = 'K';			// char type: 'a', 'b'
	double decimal1 = 5.2;		// double type: 5.47472743646, 3.34374436543
	float decimal2 = 5.2;		// float type: 5.47, 3.3
	bool alive= true;			// boolean type: true / false
	string name = "Kevin";		// string type: "asasas", "vbvbvbvb"
	
	// using multiple lines to display:
	
	cout << life << "\n";
	cout << letter << "\n";
	cout << decimal1 << "\n";
	cout << decimal2 << "\n";
	cout << alive << "\n";
	cout << name << "\n";
	
	cout << "Insert the number of lives: ";	// [cout << ] = [printf()]
	cin >> life;
	cout << "Insert a letter: ";
	cin >> letter;
	cout << "Insert a money value: ";
	cin >> decimal1;
	cout << "Insert a name: ";
	cin >> name;
	
	// using only one line to display:
	
	cout << life << "\n" << letter << "\n" << decimal1 << "\n" << decimal2 << "\n" << alive << "\n" << name << "\n";
	
	system("pause");	
	return 0;
}
