
#include <iostream>
#include <string>


using namespace std;
int main() {


	string myar[10];

	for (int i = 0; i < 10; i++) {

		cout << "give me a word: ";

		cin >> myar[i];
	} 

	for (int i = 0; i < 10; i++) {

		cout << myar[i] << endl;

	}

	return 0;
}