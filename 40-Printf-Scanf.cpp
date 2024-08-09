#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int year;

    char name[10];

    printf("\nInsert your name: ");
    scanf("%s", &name);

    printf("\nInsert your birth date: ");
    scanf("%d", &year);

    printf("\nName: %s - Birth year: %d\n\n", name, year);

    return 0;
}

/*
d, i => Integer
x, X => Hexadecimal
u => Integer without signals
s => string, char*
f => double
p => pointer
*/
