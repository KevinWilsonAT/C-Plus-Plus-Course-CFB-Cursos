#include <iostream>

using namespace std;

void counter(int num, int count=0);

int main(){
	
	counter(20);
	
	return 0;
	
}

void counter (int num, int count){
	cout << i << "\n";

	if(num > count){
		counter(num, ++count);
	}
}