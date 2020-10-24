#pragma once
#include <string>
#include "PersonalData.h"

using namespace std;

class PhoneNumbers
{
public:
	string mobileNumber;
	string workNumber;
	string homeNumber;

	PhoneNumbers() {}
	PhoneNumbers(string mobileNumber, string workNumber, string homeNumber) {
		this->mobileNumber = mobileNumber;
		this->workNumber = workNumber;
		this->homeNumber = homeNumber;
	}
};

