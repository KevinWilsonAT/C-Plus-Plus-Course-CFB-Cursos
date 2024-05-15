#include <iostream>

using namespace std;

int factorial(int n);

int fibonacci(int n);

int main(){
	
	int val, res;
	
	val = 8;
	res = factorial(val);
	cout << "Factorial of " << val << ": " << res;
	
	cout << "\n\nFibonacci Calculation with " << val << " values: ";
	for (int i = 0; i < val; i++) {
		cout << fibonacci(i + 1) << " ";
	}
	
	cout << "\n\n";
	
	return 0;
	
}

// 5! = 5*4*3*2*1

int factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * factorial(n - 1);
}

i = 0, 1, 2;
ret = 1, 1;

// 1, 1, 2, 3, 5, 8, 13, 21, ...

int fibonacci(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}