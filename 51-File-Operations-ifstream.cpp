#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ifstream

    ifstream file;

    string line;

    file.open("file.txt");

    if(file.is_open()) {
        while(getline(file, line)){
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "It is not possible to open the file" << endl;
    }

    return 0;
}
