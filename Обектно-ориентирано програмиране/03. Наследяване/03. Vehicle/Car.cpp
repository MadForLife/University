#include "Vehicle.h"
#include "InsuredItem.h"
#include "Car.h"

Car::Car() : Vehicle(), InsuredItem()
{
	this->doors = 0;
	this->wheels = 0;
	this->horsepower = 0;
}

Car::Car(const char* brand, const char* model, const char* color, const char* fuelType, 
		 const char* regNumber, int validFrom, int validTo,
		 int doors, int wheels, int horsepower)
	: Vehicle(brand, model, color, fuelType), InsuredItem(regNumber, validFrom, validTo)
{
	this->doors = doors;
	this->wheels = wheels;
	this->horsepower = horsepower;
}

Car::Car(const Car& rhs)
{
	Vehicle::Vehicle(rhs);
	InsuredItem::InsuredItem(rhs);

	this->doors = rhs.doors;
	this->wheels = rhs.wheels;
	this->horsepower = rhs.horsepower;
}

Car::~Car() { }

Car& Car::operator=(const Car& rhs)
{
	if (this != &rhs)
	{
		Vehicle::Vehicle(rhs);
		InsuredItem::InsuredItem(rhs);

		this->doors = rhs.doors;
		this->wheels = rhs.wheels;
		this->horsepower = rhs.horsepower;
	}
	return *this;
}

std::ostream& Car::inserter(std::ostream& output) const
{
	Vehicle::inserter(output);
	InsuredItem::inserter(output);

	output << "Doors: " << this->doors << std::endl;
	output << "Wheels: " << this->wheels << std::endl;
	output << "Horsepower: " << this->horsepower << std::endl;

	return output;
}

std::ostream& operator<<(std::ostream& lhs, const Car& rhs)
{
	return rhs.inserter(lhs);
}
