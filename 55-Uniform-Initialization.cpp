#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Person {
    string name;
    int age;
};

class Vehicle {
public:
    int type;
    string name;
};

int main(){

    int vect[]{1,2,3,4,5,6,7,8,9};
    int num{10};
    string name{"Bruno"};
    vector<int>values{1,2,3,4,5};
    map<string, string>capitals{"MG","Belo Horizonte"};

    Person p1{"Bruno", 38};
    Person p2{"Name", 100};

    Vehicle v1{1, "Carango"};

    for(vector<int>::iterator it = values.begin(); it != values.end(); it++) {
        cout << *it << endl;
    }

    for(map<string, string>::iterator it = capitals.begin(); it != capitals.end(); it++) {
        cout << it->first << " - " << it->second << endl;
    }

    cout << p1.name << " - " << p1.age << endl;

    cout << v1.type << " - " << v1.name << endl;

    cout << vect[3] << endl;

    return 0;
}
