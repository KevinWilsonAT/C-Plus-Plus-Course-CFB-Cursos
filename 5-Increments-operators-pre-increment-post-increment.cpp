#include <iostream>

using namespace std;

int main(){

	// Increments and operators

	int n1 = 2;
	n1 = n1 + 1;
	cout << n1 << "\n\n";
	n1 = 2;
	n1 += 1;	
	cout << n1 << "\n\n";
	n1 = 2;
	n1++;
	cout << n1 << "\n\n";
	
	n1 = 2;
	n1 = n1 - 1;
	cout << n1 << "\n\n";
	n1 = 2;
	n1 -= 1;
	cout << n1 << "\n\n";
	n1 = 2;
	n1--;
	cout << n1 << "\n\n";
	
	n1 = 2;
	n1 = n1 * 2;
	cout << n1 << "\n\n";
	n1 = 2;
	n1 *= 2;
	cout << n1 << "\n\n";
	
	n1 = 2;
	n1 = n1 / 2;
	cout << n1 << "\n\n";
	n1 = 2;
	n1 /= 2;
	cout << n1 << "\n\n";
	
	// Pre e post increment
	
	n1 = 2;
	n1++;		//	post increment
	cout << n1 << "\n\n";
	n1 = 2;
	++n1;		//	pre increment
	cout << n1 << "\n\n";
	n1 = 2;
	n1--;		//	post increment
	cout << n1 << "\n\n";
	n1 = 2;
	--n1;		//	pre increment
	cout << n1 << "\n\n";
	
	system("pause");
	return 0;
}
