


#include <iostream>
#include <vector>

using namespace std;
int main()
{
	
	vector<int> v; 
	int x;


	for (int i = 0; i < 10; i++) {

		cout << "give me number " << i+1 << ": ";
		cin >> x;
		v.push_back(x);

		cout << "the size of the vector is " << v.size() << endl;

	}

	cout << "------------------------" << endl;

	for (int i = 0; i < v.size(); i++) {

		cout << v[i] << endl;


	}




	return 0;
}

