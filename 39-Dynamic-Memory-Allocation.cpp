#include <iostream>
#include <stdio.h>  // For gets() function
#include <stdlib.h> // For malloc() function

using namespace std;

int main(){

    //char vname[50];
    //cin >> vname;
    //cout << vname;

    char *vname;
    vname = (char *) malloc(sizeof(char) +1);

    gets(vname);

    cout << vname;

    return 0;
}
