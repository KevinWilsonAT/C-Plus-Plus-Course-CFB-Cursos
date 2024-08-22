#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    vector<int> num1;
    vector<int> num2;
    int tam, i;

    num1.push_back(10);
    num1.push_back(2);
    num1.push_back(5);
    num1.push_back(8);

    num2.push_back(10);
    num2.push_back(2);
    num2.push_back(5);
    num2.push_back(8);

    //num1.insert(num1.begin(), 888)
    //num1.erase(num1.begin())
    //num2.insert(num2.end(), 888)
    //num2.erase(num2.end())

    // num1.swap(num2)

    tam1 = num1.size();
    tam2 = num2.size();

    cout "First num1 value: " << num1.front() << endl;
    cout "Last num1 value: " << num1.back() << endl;
    cout "Middle num1 value: " << num1.at(tam1/2) << endl;

    cout << "Vector size: " << tam1 << endl;

    for (i = 0; i < tam1; i++) {
        cout << num1[i] << " ";
    }

    for (i = 0; i < tam1; i++) {
        cout << num2[i] << " ";
    }

    while(!num1.empty()){
        num1.pop_back;
    }

    num2.clear();

    cout << "\nnum1 New Size: " << num1.size();

    return 0;
}
