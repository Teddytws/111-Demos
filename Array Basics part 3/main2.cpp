

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	
	int myarr[10];


	int sum = 0;

	cout << "enter 10 numbers" << endl;
	for (int i = 0; i < 10; i++) {

		cout << "enter number " << i+1 << ": ";
		cin >> myarr[i];
	}

	for (int i = 0; i < 10; i++) {

		sum = sum + myarr[i];

	}

	cout << "the sum of the array is " << sum << endl;
	cout << "the average of the array is " << sum/10.0 << endl;




	return 0;
}