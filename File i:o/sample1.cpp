
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {

	int lines;
	string sentence;


	ifstream fin;
	fin.open("inputfile.txt");

	ofstream fout;
	fout.open("outputfile.txt");

	fin >> lines;


	fin.ignore();
	//getline(fin, sentence);

	getline(fin, sentence);

	//fout << lines << endl;

	fout << sentence << endl;







	return 0;
}














