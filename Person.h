#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
	public:
		Person();
		Person(string n, string dob);
		~Person();

		//getters
		string getName() { return name; }
		string getDob() { return bday; }

		//setters
		void setName(string nombre) { name = nombre; }
		void setBday(string fNaci) { bday = fNaci; }

	protected:
	private:
		string name;
		string bday;
};

#endif 
