#include <iostream>
#include "45-POO-Classes-in-external-file-Constructor.h"

using namespace std;

int main(){

  Plane *pl1 = new Plane(3);
  Plane *pl2 = new Plane(1);
  Plane *pl3 = new Plane(2);

  pl1->Print();
  pl2->Print();
  pl3->Print();

  return 0;
}
