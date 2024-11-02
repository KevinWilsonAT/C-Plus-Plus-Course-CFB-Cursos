#ifndef 47-POO-CLASSES-INHERITANCE_H_INCLUDED
#define 47-POO-CLASSES-INHERITANCE_H_INCLUDED

class Vehicle(){
public:
    int spd;
    int bulPoof;
    int wheels;
    void setType(int tp);
    void setTopSpd(int ts);
    void setWeapon(bool wp);
private:
    int type;   //  1 = Moto    2 = Car     3 = Truck       4 = Tank
    int topSpd;
    bool weapon;
};

    void Vehicle()::disp(){
        std::cout << "Vehicle Type .......: " << type << std::endl;
        std::cout << "Top Speed ..........: " << topSpd << std::endl;
        std::cout << "Number of Wheels ...: " << wheels << std::endl;
        std::cout << "Bulletproof ........: " << bulProof << std::endl;
        std::cout << "Weapons? ...........: " << weapon << std::endl;
        std::cout << "................................................ " << std::endl;
    }

    void Vehicle::setType(int tp){
        type = tp;
    }

    void Vehicle::setTopSpd(int ts){
        topSpd = ts;
    }

    void Vehicle::setWeapon(bool wp){
        weapon = wp;
    }

class Moto:public Vehicle(){
public:
    Moto();
};

Moto::Moto(){
    spd=0;
    blind=0;
    wheels=2;
    setType(1);
    setTopSpd(120);
    setWeapon(false);
}

class Car:public Vehicle(){
public:
    Car();
};

Car::Car(){
    spd=0;
    blind=0;
    wheels=4;
    setType(2);
    setTopSpd(180);
    setWeapon(false);
}

class Truck:public Vehicle(){
public:
    Truck();
};

Truck::Truck(){
    spd=0;
    blind=0;
    wheels=6;
    setType(3);
    setTopSpd(180);
    setWeapon(false);
}

class Tank:public Vehicle(){
public:
    Tank();
};

Tank::Tank(){
    spd=0;
    blind=1;
    wheels=8;
    setType(4);
    setTopSpd(80);
    setWeapon(true);
}

#endif // 47-POO-CLASSES-INHERITANCE_H_INCLUDED
