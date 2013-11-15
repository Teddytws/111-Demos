

#include <fstream>
#include <string>

using namespace std;

int main()
{
	string input;
	int number;
	ifstream fin;
	fin.open("words.txt");

	//getline(fin, input);
	//method 1, do a second getline after each fin >>
	//getline(fin, input);
	//getline(fin, input);
	

	//method 2, do a throw away get
	
	//fin.get();
	//getline(fin, input);
	//
	//
	ofstream fout;
	fout.open("afterwords.txt");
	
	//fout << number << endl;
	//fout << input << endl;

	for (int i = 0; i < 3; i++) {
		fin >>number;
		fin.get();
		getline(fin, input);
		fout << number << endl;
		fout << input << endl;



	}


	return 0;
}