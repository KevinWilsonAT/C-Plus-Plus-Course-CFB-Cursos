#include <iostream>

using namespace std;

int main(){

    string vehicle = "Car";
    string *pv;

    pv=&vehicle; // Pointer PV receives vehicle variable addresss

    cout << pv << "\n" << &vehicle;

    *pv = "Motorcycle"; // On the address pointed by *pv add the value "Motorcycle"

    cout << "\n" << vehicle << "\n" << *pv;

    return 0;
}
