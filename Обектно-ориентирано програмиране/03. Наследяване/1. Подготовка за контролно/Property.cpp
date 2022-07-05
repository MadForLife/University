#include "Property.h"
#include <cstring>

Property::Property()
{
	owner = new char[2];
	strcpy_s(owner, 2, " ");

	price = .0;
}

Property::Property(const char* owner, float price)
{
	this->owner = new char[strlen(owner) + 1];
	strcpy_s(this->owner, strlen(owner) + 1, owner);

	this->price = price;
}

Property::Property(const Property& rhs)
{
	this->owner = new char[strlen(rhs.owner) + 1];
	strcpy_s(this->owner, strlen(rhs.owner) + 1, rhs.owner);

	this->price = rhs.price;
}

Property& Property::operator=(const Property& rhs)
{
	if (this != &rhs)
	{
		if (this->owner != nullptr) delete[] this->owner;

		this->owner = new char[strlen(rhs.owner) + 1];
		strcpy_s(this->owner, strlen(rhs.owner) + 1, rhs.owner);

		this->price = rhs.price;
	}
	return *this;
}

Property::~Property()
{
	if (owner != nullptr) delete[] owner;
}

std::ostream& Property::inserter(std::ostream& output) const
{
	output << "Owner: " << owner << std::endl;
	output << "Price: " << price << std::endl;

	return output;
}

std::ostream& operator<<(std::ostream& lhs, const Property& rhs)
{
	return rhs.inserter(lhs);
}
