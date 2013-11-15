//random number examples

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main() {
	
	srand(time(0));

	cout << "max rand is " << RAND_MAX << endl;

	for (int i = 0; i < 10; i++) {
	cout << "    " << rand() % 10 + 1;
	}	
	cout << endl;


	return 0;
}







/*
	cout << "max rand is " << RAND_MAX << endl;

	for (int i = 0; i < 10; i++) {
	cout << "    " << rand() % 10 + 1;
	}	
	cout << endl;

*/






