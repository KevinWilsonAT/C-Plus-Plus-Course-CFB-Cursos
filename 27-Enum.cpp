#include <iostream>

using namespace std;

int main(){
    enum guns{smg=100, revolver=8, rifle=12, shotgun=1};
    guns SelGun;

    SelGun = rifle;

    cout << SelGun;

    return 0;
}
