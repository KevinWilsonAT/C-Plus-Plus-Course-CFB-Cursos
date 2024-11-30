#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ofstream

    ofstream file;

    file.open("file.txt"); // opens a file if exists; if not, create it. Use ios::app to prevent overwriting content

    file << "some text here"; // insert the text content inside the file, overwriting any content inside

    file.close(); // closes the file

    return 0;
}
