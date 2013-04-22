
#include <fstream>
#include <iostream>

using namespace std;
int main() {

	int lines;
	string sentence;

	ifstream fin; 
	fin.open("inputfile.txt");

	ofstream fout;
	fout.open("outputfile.txt");


	fin >> lines;
	fout << lines << endl;
	//fin.ignore();
	getline(fin, sentence);

	getline(fin, sentence);

	fout << sentence << endl;






	return 0;
}














