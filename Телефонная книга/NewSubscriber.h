#pragma once
#include "PersonalData.h"
#include "PhoneNumbers.h"
#include "Address.h"
#include "Group.h"
#include "Comments.h"

class NewSubscriber {
public:
	PersonalData personalData;
	PhoneNumbers phoneNumbers;
	Address address;
	Comments comments;
	Group group;

	NewSubscriber() {}
	NewSubscriber(PersonalData personalData, PhoneNumbers phoneNumbers, Address address, Comments comments, Group group) {
		this->personalData = personalData;
		this->phoneNumbers = phoneNumbers;
		this->address = address;
		this->comments = comments;
		this->group = group;
	}
};

