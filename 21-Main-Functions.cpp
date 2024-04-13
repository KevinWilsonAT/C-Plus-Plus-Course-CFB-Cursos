#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char*argv[]){
	
	if (argc >1){
		if(!strcmp(argv[1], "sol")){
			cout << "Go to club! \n\n";
		}
		else if(!strcmp(argv[1], "nublado")){
			cout << "Go to cinema. \n\n";	
		}
		else {
			cout << "Stay at home";
		}
	}

	system("pause");
	return 0;
}
