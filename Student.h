#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{
	public:
		Student();
		Student(string curric, double grades, string year, string n, string dob);
		~Student();

		//getters
		string getMajor() { return major; }
		double getGrades() { return gpa; }
		string getYear() { return classYear; }

	protected:
	private:
		string major;
		double gpa;
		string classYear;
};

#endif
