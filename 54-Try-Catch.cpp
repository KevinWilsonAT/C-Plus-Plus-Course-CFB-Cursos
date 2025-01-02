#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double, double)

int main(){

    double n1, n2;

    cin >> n1 >> n2;

    try {
        cout << divide(n1, n2);
    }
    catch(const char* e) {
        cout << "ERROR: " << e << endl;
    }

    return 0;
}

double divide(double n10, double 20) {
    if(n20 == 0) {
        throw "Division by 0";
    }
    if(n10 >= 10) {
        throw "N1 must be less than 10";
    }
    return n10/n20;
}
