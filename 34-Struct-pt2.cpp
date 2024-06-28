#include <iostream>
#include <stack>

using namespace std;

struct Car {
    string name;
    string color;
    int hp;
    int topSpd;
    int spd

    void insertdata (string stname, string stcolor, int sthp, int sttopspd){
        name = stname;
        color = stcolor;
        hp = sthp;
        topSpd = sttopspd;
    }

    void display(){
        cout << "Car Name: ............ " << name << "\n";
        cout << "Car Color: ........... " << color << "\n";
        cout << "Car Horse Power: ..... " << hp << "\n";
        cout << "Car Current Speed: ... " << spd<< "\n";
        cout << "Car Top Speed: ....... " << topSpd << "\n";
    }

    void changeSpd(int chspd){
        spd = chspd;

        if(spd > topSpd){
            spd = topSpd;
        }
        if(spd < 0){
            spd = 0;
        }
    }
};

int main(){

    Car car1;

    car1.insertdata("Tornado", "Red", 450, 350);
    car1.display();
    car1.changeSpd(150);
    car1.display();

    return 0;
}
