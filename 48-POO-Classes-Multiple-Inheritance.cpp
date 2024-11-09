#include <iostream>
#include "47-POO-Classes-Multiple-Inheritance.h"

using namespace std;

int main(){

    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    Base3 *obj3 = new Base3();

    obj1->dispBase1();
    obj2->dispBase2();

    obj3->dispBase1();
    obj3->dispBase2();

    return 0;
}
