#include "Professor.h"

Professor::Professor()
{
	cout << "Inside Default Professor Constructor" << endl;
}

Professor::Professor(string field, string status, string n, string dob) : Person(n, dob)
{
	cout << "Inside of Overridden Professor Constructor" << endl;
	fieldOfStudy = field;
	tenureStatus = status;
}

Professor::~Professor()
{
	cout << "Inside of Professor Destructor" << endl;
}
