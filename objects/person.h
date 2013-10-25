
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;
class Person {

public:
Person();
Person(int, string, char);


int get_age();
void set_age(int);


private:
int age;
string name;
char sex;



};

#endif







