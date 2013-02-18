#include <iostream>
#include <string>

using namespace std;

int main () {

	string light;
	string direction;

	cout << "what color is the light? ";
	cin >> light;

	cout << "what direction are you going? ";
	cin >> direction;

	if (light == "red") {
	//red light code goes here
		if (direction == "right") {
			cout<<"stop, then go"<<endl;
		}
		else {
			cout<<"stop"<<endl;
		}
	}
	else {
		cout<<"go"<<endl;
	}


	return 0;
}
