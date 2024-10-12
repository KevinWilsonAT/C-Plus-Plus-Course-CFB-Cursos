#include <iostream>
#include "46-POO-Classes-Get-Set.h"

using namespace std;

int main(){

  Vehicle *v1 = new Vehicle(1);
  Vehicle *v2 = new Vehicle(2);
  Vehicle *v3 = new Vehicle(3);

  cout << v1->getMaxSpd() << endl;
  cout << v2->getMaxSpd() << endl;
  cout << v3->getMaxSpd() << endl;

  return 0;
}
