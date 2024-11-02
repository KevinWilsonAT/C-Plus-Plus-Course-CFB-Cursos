#include <iostream>
#include "47-POO-Classes-Inheritance.h"

using namespace std;

int main(){

  Moto *vh1 = new Moto();
  Car *vh2 = new Car();
  Truck *vh3 = new Truck();
  Tank *vh4 = new Tank();

  vh1->disp();
  vh2->disp();
  vh3->disp();
  vh4->disp();

  return 0;
}
