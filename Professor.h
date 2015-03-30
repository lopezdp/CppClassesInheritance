#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Professor : public Person
{
	public:
		Professor();
		Professor(string field, string status, string n, string dob);
		~Professor();

		//getters
		string getField() { return fieldOfStudy; }
		string getStatus() { return tenureStatus; }
		
	protected:
	private:
		string fieldOfStudy;
		string tenureStatus;
};

#endif

