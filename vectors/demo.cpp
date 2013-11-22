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


void printvec (vector<int> v);



int main() {


	vector<int> myvec;
	vector<int>::iterator it;

	myvec.push_back(10);
	myvec.push_back(20);
	myvec.push_back(30);
	myvec.push_back(40);
	myvec.push_back(20);
	

printvec(myvec);
	for (it = myvec.begin(); it!=myvec.end(); it++) {

		if (*it == 20){
			myvec.erase(it);
			break;

		}

	}
	cout << endl;


printvec(myvec);

	return 0;
}


void printvec(vector<int> v) {

	for (int i = 0 ; i < v.size(); i++) {

		cout << v[i]<< endl;
		//cout << v.at(i) << endl;

	}


}


/*
	for (it = myvec.begin(); it!=myvec.end(); it++) {

		if (*it == 20){
			myvec.erase(it);
			break;

		}


	}
	*/






