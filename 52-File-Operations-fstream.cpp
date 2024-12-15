#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //fstream

    fstream file;
    char opc = 's';
    string name, line;

    file.open("file.txt",ios::out|ios::app);

    while((opc=='s') or (opc='S')) {
        cout << "Insert a name";
        cin >> name;

        file << name << "\n";

        cout << "Insert a new name? (y/n)";
        cin >> opc;
        system("CLS");
    }
    file.close();

    file.open("file.txt",ios::in);

    cout << "Inserted names:" <<endl;

    if(file.is_open()) {
        while(getline(file, line)){
            cout << line << endl;
        }
    }
    else {
        cout << "It is not possible to open the file" << endl;
    }

    return 0;
}
