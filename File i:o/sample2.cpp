

#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {


	string sentence;

	ifstream fin;
	fin.open("inputfile2.txt");


	while (!fin.eof()) {
	getline(fin, sentence, '|');
	cout << sentence << endl;

	getline(fin, sentence, '|');
	cout << sentence << endl;

	getline(fin, sentence);
	cout << sentence << endl;

}



	return 0;
}


















/*

	while (getline(fin, sentence, ',')) {

		cout << sentence << endl;

	}



	for (int i = 0; i < 6; i++) {

	getline(fin, sentence, ',');
	cout << sentence << endl;
	}

*/