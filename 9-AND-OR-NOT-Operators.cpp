#include <iostream>
#include <cstdlib>

using namespace str;

int main(){

    /*
        AND              OR              NOT
    p | q | p&&q     p | q | p||q        p | !p
    --|---|-----    ---|---|-----       ---|----
    T | T |  T       T | T |  T          T |  F
    T | F |  F       T | F |  T          F |  T
    F | T |  F       F | T |  T
    F | F |  F       F | F |  F
    */

	system("pause");
	return 0;
}
