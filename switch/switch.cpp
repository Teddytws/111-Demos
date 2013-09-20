#include <iostream>

using namespace std;
int main() {

	int choice;
	bool runProgram = true;
	int tries = 0;




	while (runProgram && tries<3) {
			cout << "press 1 for 1 hour\npress 2 for 2 hours\npress 3 for all day\npress 4 to cancle"<< endl;
	cin >> choice;
		switch (choice) {

		case 1:
			//cout << "you pressed 1" << endl;

		
		//break;
		case 2:
		cout << "you pressed 1 or 2" << endl;
		break;

		case 3:
		cout << "you pressed 3" << endl;
		break;

		case 4:
		runProgram = false;
		break;

		default:
		cout << "you pressed something else" << endl;
		tries++;
		break;
		}

}
cout <<"end program"<< endl;
	return 0;
}





