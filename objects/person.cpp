

#include "person.h" 


Person::Person(): age(-1),
				name("default"),
				sex('U') {
}

Person::Person(int newAge,
				string newName,
				char newSex) {

age = newAge;
name = newName;
sex = newSex;


}


int Person::get_age() {
	return age;

	}

void Person::set_age(int newAge) {

	age = newAge;
}