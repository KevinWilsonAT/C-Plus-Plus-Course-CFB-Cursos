#ifndef 45-POO-CLASSES-IN-EXTERNAL-FILE-CONSTRUCTOR_H_INCLUDED
#define 45-POO-CLASSES-IN-EXTERNAL-FILE-CONSTRUCTOR_H_INCLUDED

class Plane {
public:
    int spd=0;
    int maxSpd;
    std::string type;
    Plane(int tp);
    void Print();
};

Plane::Plane(int tp){
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

void Plane::Print() {
    std::cout << "Type ...........: " << type << std::endl;
    std::cout << "Top Speed ......: " << maxSpd << std::endl;
    std::cout << "Current Speed ..: " << spd << std::endl;
    std::cout << "------------------------------------------" <<std::endl;
}

#endif // 45-POO-CLASSES-IN-EXTERNAL-FILE-CONSTRUCTOR_H_INCLUDED
