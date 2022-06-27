#include "Object.h"
#include <cstring>

Object::Object()
{
	name = new char[2];
	strcpy_s(name, 2, " ");
}

Object::Object(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

Object::Object(const Object& rhs)
{
	this->name = new char[strlen(rhs.name) + 1];
	strcpy_s(this->name, strlen(rhs.name) + 1, rhs.name);
}

Object& Object::operator=(const Object& rhs)
{
	if (this != &rhs)
	{
		this->name = new char[strlen(rhs.name) + 1];
		strcpy_s(this->name, strlen(rhs.name) + 1, rhs.name);
	}
	return *this;
}

std::ostream& Object::inserter(std::ostream& output) const
{
	output << name << std::endl;
	return output;
}

std::ostream& operator<<(std::ostream& lhs, const Object& rhs)
{
	return rhs.inserter(lhs);
}

Object::~Object()
{
	if (this->name != nullptr) delete[] this->name;
}