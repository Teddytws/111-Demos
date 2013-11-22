

#include <set>
#include <iostream>


//insert
//iterator - begin - end
//empty
//find
//count

using namespace std;

int main() {

	set<int> myset;
	set<int>::iterator it;

	bool found;

	for (int i = 1; i <= 5; ++i) {

		myset.insert(i*10);

	}

	for (it = myset.begin(); it != myset.end(); it++) {
		cout << *it << ", ";

	}

	cout << endl;
	
	it = myset.find(100);

	if (it != myset.end())
		cout << "found it" << endl;
	else
		cout << "didnt find it" << endl;



	return 0;
}






















/*

	set<int> myset;
	set<int>::iterator it;

	bool found;

	for (int i = 1; i <= 5; ++i) {

		myset.insert(i*10);

	}

	for (it = myset.begin(); it != myset.end(); it++) {
		cout << *it << ", ";

	}

	cout << endl;
	
	it = myset.find(20);

	if (it != myset.end())
		cout << "found it" << endl;
	else
		cout << "didnt find it" << endl;

		*/







