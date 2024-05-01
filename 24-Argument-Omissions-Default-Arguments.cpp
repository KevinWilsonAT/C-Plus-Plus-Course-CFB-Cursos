#include <iostream>

using namespace std;

void imp(string txt="Peter");

int main(){
	
	imp("Youtube");
	
	return 0;
	
}

void imp (string txt){
	cout << "\n" << txt << "\n";
}