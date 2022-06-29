#include "Animal.h"
#include <cstring>

void Animal::set_data(int age, char name[10])
{
	this->age = age;
	strcpy_s(this->name,strlen(name) + 1, name);
}