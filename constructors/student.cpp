
#include "student.h"
#include <iostream>

	Student::Student() {

	name = "default";
	student_id = 0;
	major = "undeclared";

	}

	Student::Student (string newName, int newID, string newMajor) {

		name = newName;
		student_id = newID;
		major = newMajor;
	}

	Student::~Student() {

		cout<<" i hit the destructor" << endl;


	}




	string Student::getName() {

		return name;

	}
	
	int Student::getId() {

		return student_id;

	}
	string Student::getMajor() {

		return major;

	}

	void Student::setName (string newName) {

		name = newName;

	}


























