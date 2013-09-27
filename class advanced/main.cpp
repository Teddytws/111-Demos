

#include <iostream>
#include "simpleMath.h"
#include "am.h"

using namespace std;

int main () {
	
	bool running = true;
	int userChoice;
	int num1, num2, result;
	float floatResult;
	float userPi;

	int thisismynubmerthenameisreallylong;
	SimpleMath sMath;
	AdvancedMath am;

	while (running) {

		cout << "[1] add" << endl;
		cout << "[2] subtract" << endl;
		cout << "[3] sin" << endl;
		cout << "[4] circle area" << endl;
		cout << "[5] quit" << endl;
		cout << "Please choose an operation: " << endl;

		cin >> userChoice;

		switch (userChoice) {

			case 1: 
			cout << "give me 2 numbers" << endl;
			cin >> num1 >> num2;

			result = sMath.add(num1, num2);

			cout << result << endl;

			break;
			case 2:
			//subtract here
			cout << "give me 2 numbers" << endl;
			cin >> num1 >> num2;

			result = sMath.subtract(num1, num2);

			cout << result << endl;
			break;

			case 3: 
			cout << "give me a number" << endl;
			cin >> num1;

			floatResult = am.sin(num1);

			cout << floatResult << endl;

			break;

			case 4:
			cout << "give me a radius" << endl;
			cin >> num1;
			cout << "pi is currently " << am.getPi() << endl;
			cout << " set new pi number " << endl;
			cin >> userPi;
			am.setPi(userPi);
			cout << "pi is currently " << am.getPi() << endl;

			floatResult  = am.circleArea(num1);

			cout << floatResult << endl;



			break;

			case 5:
			 running = false;
			break;
			default:
				cout << "incorrect responce" << endl;
			break;
		}
	}



	return 0;
}