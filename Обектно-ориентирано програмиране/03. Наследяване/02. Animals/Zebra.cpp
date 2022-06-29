#include <iostream>
#include "Zebra.h"

void Zebra::message_zebra()
{
	std::cout << "The zebra named " << name << " is " << age << " years old.\n";
	std::cout << "The zebra comes from Africa. \n";
}