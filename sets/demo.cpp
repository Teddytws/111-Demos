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

	myset.insert(20);
	myset.insert(30);
	myset.insert(40);
	myset.insert(50);
	myset.insert(60);



	it = myset.find(50);

	
	if (it != myset.end())
		cout << "found it" << endl;
	else
		cout << " nope" << endl;



	myset.erase(50);

	for (it = myset.begin(); it != myset.end(); it++) {

		cout << *it << endl;

	}



	return 0;
}





















