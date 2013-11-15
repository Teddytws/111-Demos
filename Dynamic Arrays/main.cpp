



#include <iostream>

using namespace std;

int main()
{
	int input;
	int size;
	int* array;

	cout << "enter how big of an array you want: ";
	cin >> size;


	array = new int[size];

	for (int i = 0; i < size; i++){

		cout << "enter number " << i+1 << ": ";
		cin >> input;

		array[i] = input;
	}

	cout << "--------------------" << endl;

	for (int i = 0; i < size; i++) {

		cout << array[i] << endl;
	}


	delete [] array;

	array = 0;
	array = NULL;


	return 0;
}