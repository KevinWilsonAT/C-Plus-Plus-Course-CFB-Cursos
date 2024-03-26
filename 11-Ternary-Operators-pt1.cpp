#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    //<logic_test> ? <true> : <false>;

    int r1, r2, final_r;

    string result;

    cout << "Insert 1st rank: ";
    cin >> r1;
    cout << "Insert 2nd rank: ";
    cin >> r2;

    final_r = r1 + r2;

    (final_r >= 6.0) ? result = "Approved" : result = "Reproved";

    cout << "\n Student's result: " << result << "\n";

	system("pause");
	return 0;
}
