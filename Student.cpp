#include "Student.h"

Student::Student()
{
	cout << "Inside of Default Student Constructor" << endl;
}

Student::Student(string curric, double grades, string year, string n, string dob) : Person(n, dob)
{
	cout << "Inside of Overridden Student Constructor" << endl;
	major = curric;
	gpa = grades;
	classYear = year;
};


Student::~Student()
{
	cout << "Inside of Student Destructor" << endl;
}
