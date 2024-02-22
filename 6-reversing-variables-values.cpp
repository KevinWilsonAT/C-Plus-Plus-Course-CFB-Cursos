#include <iostream>

using namespace std;

int main(){

	int n = 2;	
	cout << -n << "\n\n";			//	inverts the value but does not store that value in the variable
	
	n=-n;
	
	cout << n << "\n\n";			//	inverts the value and store that value in the variable
	system("pause");
	return 0;
}
