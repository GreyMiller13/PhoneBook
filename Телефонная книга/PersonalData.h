#pragma once
#include <string>

using namespace std;

class PersonalData {
public:
	string firstName;
	string middleName;
	string lastName;

	PersonalData() {}
	PersonalData(string firstName, string middleName, string lastName) {
		this->firstName = firstName;
		this->middleName = middleName;
		this->lastName = lastName;
	}
};

