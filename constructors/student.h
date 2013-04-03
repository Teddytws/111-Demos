
#include <string>

using namespace std;
class Student {
	
	public:

	Student();
	Student (string newName, int newID, string newMajor);
	~Student();

	string getName();
	int getId();
	string getMajor();

	void setName (string newName);


	private:

	string name;
	int student_id;
	string major;


};