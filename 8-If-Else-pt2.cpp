#include <iostream>
#include <cstdlib>

using namespace str;

int main(){

	int rank1, rank2 , res;
	char opt;

	start:

	    system("cls");

        cout << "Rank 1 Number: ";
        cin >> rank1;
        cout << "Rank 2 Number: ";
        cin >> rank2;

        res = rank1 + rank2;

        if (rank1 >= 60){
            cout << "Approved";
        }
        else if (rank2 >= 40){
            cout << "Catch up"
        }
        else{
            cout << "Reproved"
        }

        cout << "Want to insert another two ranks [y/n]? "
        cin >> opt;

        if (opt == 's' or opt == 'Y'){
            goto start;
        }

	system("pause");
	return 0;
}
