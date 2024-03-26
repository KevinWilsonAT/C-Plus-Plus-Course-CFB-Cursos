#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    /*
        SYNTAX

        switch (<expression>){
            case <const1>:
                <commands1>;
            break;

            case <const2>:
                <commands2>;
            break;

            ...

            default:
                <commands_default>
        }

        MULTIPLE OPTION W/ SAME OUTPUT:

        switch (<expression>){
            case <const1>:
            case <const2>:
            case <const3>:
            case <const4>:
                <commands1>;
            break;

            case <const5>:
            case <const6>:
            case <const7>:
            case <const8>:
                <commands2>;
            break;

            ...

            default:
                <commands_default>
        }

        SWITCH INSIDE ANOTHER SWITCH:

        switch (<expression1>){
            case <const1>:
                switch (<expression1a>){
                    case <const1a>:
                        <commands1a>;
                    break;

                    case <const1b>:
                        <commands1b>;
                    break;

                    ...

                    default:
                        <commands_default1>
                }
            break;

            case <const2>:
                switch (<expression2a>){
                    case <const2a>:
                        <commands2a>;
                    break;

                    case <const2b>:
                        <commands2b>;
                    break;

                    ...

                    default:
                        <commands_default2>
                }
            break;

            ...

            default:
                <commands_default>
        }


    */

    int option;

    cout << "Select a color:\n"
    cout << "[1] Red, [2] Green, [3] Blue";
    cin >> option;

    switch(option){
        case 1:
            cout << "Selected color: Red\n";
            break

        case 2:
            cout << "Selected color: Green\n";
            break

        case 3:
            cout << "Selected color: Blue\n";
            break

        default:
            cout << "Invalid Command";
    }

    cout << "\nProgram End\n";

	system("pause");
	return 0;
}
