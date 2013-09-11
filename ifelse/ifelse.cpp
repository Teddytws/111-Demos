#include <iostream>
#include <string>

using namespace std;

int main () {

	int temp;
	int pressure;

	cout << "what is the temp?: ";
	cin >> temp;
	cout << "what is the pressure: ";
	cin >> pressure;

	if (temp > 100 && pressure > 100)
	{
		cout << "shutdown" << endl;
	}

	else if (temp > 100 || pressure > 100)
	{
		cout << "warning" << endl;
	}

	else {
		cout << "OK" << endl;
	}



	return 0;
}





