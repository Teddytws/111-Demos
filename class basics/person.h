
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;
class Person
{
	
	public:

		void driveToTheStore(string StoreName);

		void setSecret (string newSecret);

		int age;

	private:

		string secret;

};

#endif
