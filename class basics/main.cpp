

#include "person.h"

int main () {
		


		Person teddy;  //declare a person object named teddy
		Person jenny;  //declare a person object named jenny

		teddy.age = 30; //set PUBLIC variable age = 30
		jenny.age = 22; //set PUBLIC variable age = 22

		teddy.driveToTheStore("Safeway");  //Use public function
		jenny.driveToTheStore("Raileys");

		teddy.setSecret("isnt really 30");
		jenny.setSecret("is really 22");




	return 0;
}