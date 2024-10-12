#ifndef 46-POO-CLASSES-GET-SET_H_INCLUDED
#define 46-POO-CLASSES-GET-SET_H_INCLUDED

class Vehicle{
public:
    int spd;
    int type;
    Vehicle(int tp);
    int getMaxSpd();
    bool getOnoff();
    void setOnoff(int st)

private:
    std::string name;
    int MaxSpd;
    bool onoff;
    void setMaxSpd(int ms)
};

int Vehicle::getMaxSpd(){
    return MaxSpd;
}

bool Vehicle::getOnoff(){
    return onoff;
}

void Vehicle::setOnoff(int st){
    if(st == 1){
        onoff = true;
    }
    else if(st == 0){
        onoff = false;
    }
}

Vehicle::Vehicle(int tp){ // 1 - car; 2 = plane; 3 = ship
    tipo = tp;
    if(type == 1) {
        name = "Car";
        setMaxSpd(200);
    }
    else if(type == 2) {
        name = "Plane";
        setMaxSpd(800);
    }
    else if(type == 3) {
        name = "Ship";
        setMaxSpd(120);
    }

    setOnoff(0);
}

#endif // 46-POO-CLASSES-GET-SET_H_INCLUDED
