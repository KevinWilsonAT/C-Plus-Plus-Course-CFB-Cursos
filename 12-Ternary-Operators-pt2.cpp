#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    //<logic_test> ? <true> : <false>;

    int number1, x = 5;
    cout << "Insert 1st rank: ";
    cin >> number1;

    (number1 >= 5) ? x++ : x--;

    cout << "\n X new value: " << x << "\n";

	system("pause");
	return 0;
}
