#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void add(int n1, int n2);
void add();

int main(){
	
	add(20,30);
	add();
	
	return 0;
	
}

void add(int n1, int n2){
	int res;
	
	res = n1 + n2;	
	cout << "\n" n1 << " and " << n2 << " = " << res << "\n";
}

void add(){
	int n1, int n2, int res;
	n1 = 10;
	n2 = 20;
	res = n1 + n2;	
	cout << "\n" n1 << " and " << n2 << " = " << res << "\n";
}
