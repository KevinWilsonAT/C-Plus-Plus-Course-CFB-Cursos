#include <iostream>
#include <vector>

using namespace std;

auto sum(double n1, double n2) -> double {
    return n1 + n2;
}

string channel() {
    return "CFB Cursos";
}

void sommatory() {
    static auto i = 0;
    i++;
    cout << i << endl;
}

int main() {

    auto num = 10;
    auto name = "Bruno";
    auto value = 10.5;

    auto res = sum(10.3, 5.2);

    cout << res << endl;

    register int cont;

    for (cont = 0; cont <= 10; cont++) {
        cout << cont << endl;
    }
    
    vector<int> v { 10,20,30,40,50,60,70 };

    for (register auto it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }

    sommatory();

    return 0;
}
