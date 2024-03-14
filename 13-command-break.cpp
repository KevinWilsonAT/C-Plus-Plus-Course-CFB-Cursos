#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int counter = 0; // declaration of the variable counter and its initial value

    while(counter < 1000){  // looping from the initial value in the variable counter until 1000
        cout << counter << "\n";
        counter++;

        if(counter == 500){
            break;      // This will break the loop after reaching 500
        }
    }

	system("pause");
	return 0;
}
