
#include <iostream>
#include "student.h"


using namespace std;
int main () {
	

	Student basic;
	Student teddy("Teddy", 10, "CSCI");
	Student scott("Scott", 9, "PHIL");


	cout << basic.getName() << endl;
	cout << teddy.getName() << endl;
	cout << scott.getName() << endl;





	return 0;
}