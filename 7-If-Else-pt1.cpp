#include <iostream>

using namespace str;

int main(){
	
	int number = 10;
	int number2 = 50;
	
	// Logic test operators:
	
	// >	<
	// >=	<=
	// ==	!=
	
	//	if( /* logic test */ ){
	//		 in case logic test == true
	//	}
	//	else{
	//		 in case logic test == false
	//	}
	
	if (number >= 10){
		cout << "Number value > 10";
	}
	
	if (number < number2){
		cout << "True"
	}
	else{
		cout << "False"
	}
	
	system("pause");
	return 0;
}
