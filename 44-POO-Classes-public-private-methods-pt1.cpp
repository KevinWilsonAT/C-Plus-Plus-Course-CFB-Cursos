#include <iostream>

using namespace std;

class Plane {
public:
    int spd=0;
    int maxSpd;
    string type;
    void ini(int tp);
};

void Plane::ini(int tp){
    if(tp == 1) {
        this->maxSpd=800;
        this->type="Jet";
    }
    else if(tp == 2) {
        this->maxSpd=350;
        this->type="Monomotor";
    }
    else if(tp == 3) {
        this->maxSpd=180;
        this->type="Plainer";
    }
    else {
        cout << "Invalid number or character"
    }
}

int main(){

    Plane *pl1 = new Plane();
    Plane *pl2 = new Plane();

    pl1->ini(1);
    pl2->ini(2);

    cout << pl1->maxSpd << endl;
    cout << pl2->maxSpd;

    return 0;
}
