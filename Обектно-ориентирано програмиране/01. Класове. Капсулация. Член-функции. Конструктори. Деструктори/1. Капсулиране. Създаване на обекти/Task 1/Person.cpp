#include <cstring>
#include <iostream>
#include "Person.h"

Person::Person()
{
	name = new char[2];
	name = (char*)" ";

	weight = 0.;
	height = 0;
}
Person::Person(const char* name, int height, int weight)
{
	setName(name);
	setHeight(height);
	setWeight(weight);
}

Person::~Person()
{
	if (this->name != nullptr) delete[] this->name;
}

void Person::setName(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name), name);
}

void Person::setHeight(unsigned height) { this->height = height; }
void Person::setWeight(double weight) { this->weight = weight; }

char* Person::getName() const { return this->name; }
unsigned Person::getHeight() const { return this->height; }
double Person::getWeight() const { return this->weight; }

void Person::read()
{
	std::cout << "Enter a name: ";
	this->name = new char[100];
	std::cin.getline(name, 99);

	std::cout << "Enter weight in kg: ";
	std::cin >> this->weight;

	std::cout << "Enter height in cm: ";
	std::cin >> this->height;

	std::cin.ignore();
}

double Person::bmi() const
{
	return this->weight / ((0.01 * height) * (0.01 * height));
}

void Person::print() const
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Height: " << this->height << std::endl;
	std::cout << "Weight: " << this->weight << std::endl;
}

void Person::state() const
{
	double temp = this->bmi();

	if (temp < 16)
	{
		std::cout << "Severely underweight \n";
		return;
	}
	else if (temp < 18.5)
	{
		std::cout << "Underweight \n";
		return;
	}
	else if (temp < 25)
	{
		std::cout << "Normal \n";
		return;
	}
	else if (temp < 30)
	{
		std::cout << "Overweight \n";
		return;
	}
	else if (temp < 35)
	{
		std::cout << "Severely overweight \n";
		return;
	}
	else if (temp < 40)
	{
		std::cout << "Obese \n";
		return;
	}
	else if (temp >= 40)
	{
		std::cout << "Morbidly obese \n";
		return;
	}
}