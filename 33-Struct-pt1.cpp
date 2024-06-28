#include <iostream>
#include <stack>

using namespace std;

struct Car {
    string name;
    string color;
    int hp;
    int topSpd;
};

int main(){

    Car car1;

    car1.name="Tornado";
    car1.color="Red";
    car1.hp=450;
    car1.topSpd=350;

    cout << "Car Name: .......... " << car1.name << "\n";
    cout << "Car Color: ......... " << car1.color << "\n";
    cout << "Car Horse Power: ... " << car1.hp << "\n";
    cout << "Car Top Speed: ..... " << car1.topSpd << "\n";

    return 0;
}
