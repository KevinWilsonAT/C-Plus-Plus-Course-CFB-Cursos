#include <iostream>

using namespace std;

int main(){

    int *p;
    int vector[10];

    p=&vector[0]; // p = vector;
    *p=10; // vector[0] = 10;
    cout << "\n" << vector[0] << "\n";

    *(p+=1);
    *p=20; // vector[1] = 20;
    cout << "\n" << vector[1] << "\n";

    *(p+=1);
    *p=30; // vector[2] = 30;
    cout << "\n" << vector[2] << "\n";

    return 0;
}
