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

    Car *cars = new Car[5];
    Car car0, car1, car2, car3, car4;

    cars[0] = car0; cars[1] = car1; cars[2] = car2; cars[3] = car3; cars[4] = car4;

    car[0].insertdata("Tornado", "Red", 450, 350);
    car[1].insertdata("Luxury", "Black", 250, 260);
    car[2].insertdata("Family", "Silver", 150, 180);
    car[3].insertdata("Work", "White", 80, 120);
    car[4].insertdata("Standard", "Gray", 100, 150);

    for (int i=0; i<=5; i++){
        car[i].display();
    }

    return 0;
}
