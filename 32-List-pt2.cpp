#include <iostream>
#include <stack>

using namespace std;

int main(){

    list<int> classes;
    int sz;
    list<int>::iterator it;

    sz=10;

    for(int i=0; i<sz; i++){
        classes.push_front(i);
    }

    it=aula.begin();
    advance(it,3);
    classes.insert(it,0);

    classes.erase(--it);

    cout << "List size: " << classes.size() << "\n\n";

    /*
    classes.sort();
    classes.reverse();
    */

    sz = classes.size();
    for(int i=0; i< sz; i++){
        cout << classes.front() << "\n";
        classes.pop_front();
    }

    return 0;
}
