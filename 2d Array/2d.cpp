


#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main() {

	srand(time(0));



	int arr[3][3];

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++ ) {

			arr[i][k] = rand() % 10 + 1;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++ ) {

			cout << arr[i][k] << "  ";
		}
		cout << endl;
	}
	



	return 0;
}






