
#include <vector>
#include <iostream>

//size
//empty
//operator[]
//at
//front
//back
//push_back
//pop_back
//erase
//clear


using namespace std;

int main() {


	vector<int> myvec;

	myvec.push_back(10);
	myvec.push_back(20);
	myvec.push_back(30);
	myvec.push_back(40);
	

	cout << myvec[0] << endl;;
	cout << myvec[1] << endl;

	cout << myvec.at(1);

	myvec.pop_back();

	cout << myvec.back() << endl;
	cout << myvec.front() << endl;






	return 0;
}

















