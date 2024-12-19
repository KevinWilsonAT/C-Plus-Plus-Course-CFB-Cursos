#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string>products={"mouse", "keyboard", "display", "case", "sound speakers"};
    vector<string>::iterator it;

    it = products.end();

    // next
    cout<< *next(it,1) << endl;

    // prev
    cout<< *prev(it,1) << endl;

    // all
    for(it = products.begin(); it != products.end(); it++) {
        cout << *it << endl;
    }


    return 0;
}
