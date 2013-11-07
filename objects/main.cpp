
#include "person.h"


int main() {

Person scott;


cout << scott.get_age() << endl;
scott.set_age(24);
cout << scott.get_age() << endl;

Person teddy;
cout << teddy.get_age() << endl;
teddy.set_age(21);
cout << teddy.get_age() << endl;


Person jenny(21, "jenny", 'f');
cout << jenny.get_age() << endl;




return 0;
}