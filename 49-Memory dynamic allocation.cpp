#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

    char vnome[50];
    cin >> vnome;
    cout << vnome;

    char vnome2[50];
    gets(vnome2);
    cout << vnome2;

    char *vnome3;
    vnome3 = (char *) malloc(sizeof(char)+1);
    gets(vnome3);
    cout << vnome3;

    return 0;
}
