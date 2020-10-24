#pragma once
#include <string>

using namespace std;

class Address {
public:
	string city;
	string street;
	string house;
	string flat;
	Address() {}
	Address(string city, string street, string house, string flat) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->flat = flat;
	}
};

