#include <iostream>

using namespace std;

void sum(float *var, float value);
void ptar(float *v);

int main(){

    float num = 0;
    float vector[5];


    sum(&num, 15);
    iniVector(vector);

    cout << num << "\n\n";

    for(int i = 0; i < 5; i++){
        cout << vector[i] << "\n";
    }

    return 0;
}

void sum(float *var, float value){
    *var += value;
}

void iniVector(float *v){
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
}
