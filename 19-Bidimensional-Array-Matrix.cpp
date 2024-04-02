#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    /*
        SYNTAX

		Declaration:
			<matrix_type (int, float, etc.)> <matrix_name>[<matrix_row_size>][<matrix_col_size>];
			
		Atribution:
			<matrix_name>[<matrix_row_position>][<matrix_col_position>] = <value>;
			
		Display (specific position / value):
			cout << <matrix_name>[<matrix_row_position>][<matrix_col_position>];
		
		Display (all values of a specific row):
			for (row = 0; row < <matrix_max_row_size>; row++){
				for (col = 0; col < <matrix_max_col_size>; col++){
					cout << <matrix_name>[<matrix_row_position>][col];
				}
			}
			
		Display (all values of a specific column):
			for (row = 0; row < <matrix_max_row_size>; row++){
				for (col = 0; col < <matrix_max_col_size>; col++){
					cout << <matrix_name>[<row][<matrix_col_position>];
				}
			}
			
		Display (all positions / values):
			for (row = 0; row < <matrix_max_row_size>; row++){
				for (col = 0; col < <matrix_max_col_size>; col++){
					cout << <matrix_name>[<row>][<col>];
				}
			}
	*/
	
	system("pause");
	return 0;
}
