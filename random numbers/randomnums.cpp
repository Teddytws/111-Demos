//random number examples

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main() {
	
	//seed the random number algorithm
	srand(time(NULL));
	//srand(5);

	cout << "max rand is " << RAND_MAX << endl;

	for (int i = 0; i < 10; i++) {
	cout << "    " << rand() % 10 + 1;
	}	
	cout << endl;





	return 0;
}













