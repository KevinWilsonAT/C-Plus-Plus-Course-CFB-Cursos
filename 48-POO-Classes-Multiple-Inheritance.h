#ifndef 47-POO-CLASSES-MULTIPLE-INHERITANCE_H_INCLUDED
#define 47-POO-CLASSES-MULTIPLE-INHERITANCE_H_INCLUDED

class Base1{
public:
    void dispBase1();
};

void Base1::dispBase1(){
    std::cout << "Display base 1" << std:endl;
}

class Base2{
public:
    void dispBase2();
};

void Base2::dispBase2(){
    std::cout << "Display base 2" << std:endl;
}

class Base3:public Base1, public Base2{
};

#endif // 47-POO-CLASSES-MULTIPLE-INHERITANCE_H_INCLUDED
