#include <iostream>

using namespace std;

int n1, n2; // global variables

int main(){
	
	// Math operators: + - * / %
	
	int n3, n4; // local variables
	int res;

	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;
	
	res = n1 + n2 + n3 + n4;
	cout << "All variables addition result: " << res << "\n\n";
	
	res = (n1 + n2 + n3 + n4)-10;
	cout << "All variables result: " << res << "\n\n";
	
	res = n1 + n2 * n4;
	cout << "variables result: " << res << "\n\n";
	
	res = (n1 + n2) * n4;
	cout << "variables result: " << res << "\n\n";
	
	res = n1 / n2;
	cout << "division result: " << res << "\n\n";
	
	res = n1 % n2;
	cout << "modulo result: " << res << "\n\n";
	
	system("pause");
	return 0;
}
