#include "Person.h"
#include <iostream>

Person::Person()
{
	//constructor
	cout << "Inside Person Constructor" << endl;
}

Person::Person(string n, string dob)
{
	cout << "Inside Overridden PersonConstructor" << endl;
	name = n;
	bday = dob;
}

Person::~Person()
{
	cout << "Inside Person Destructor" << endl;
}
