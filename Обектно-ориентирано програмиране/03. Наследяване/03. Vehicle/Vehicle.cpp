#include "Vehicle.h"
#include <iostream>

void Vehicle::setBrand(const char* brand)
{
	this->brand = new char[strlen(brand) + 1];
	strcpy_s(this->brand, strlen(brand) + 1, brand);
}

void Vehicle::setModel(const char* model)
{
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
}

void Vehicle::setColor(const char* color)
{
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
}

void Vehicle::setFuelType(const char* fuelType)
{
	this->fuelType = new char[strlen(fuelType) + 1];
	strcpy_s(this->fuelType, strlen(fuelType) + 1, fuelType);
}

Vehicle::Vehicle()
{
	setBrand(" ");
	setModel(" ");
	setColor(" ");
	setFuelType(" ");
}

Vehicle::Vehicle(const char* brand, const char* model, const char* color, const char* fuelType)
{
	setBrand(brand);
	setModel(model);
	setColor(color);
	setFuelType(fuelType);
}

Vehicle::Vehicle(const Vehicle& rhs)
{
	setBrand(rhs.brand);
	setModel(rhs.model);
	setColor(rhs.color);
	setFuelType(rhs.fuelType);
}

Vehicle::~Vehicle()
{
	if (this->brand != nullptr) delete[] this->brand;
	if (this->model != nullptr) delete[] this->model;
	if (this->color != nullptr) delete[] this->color;
	if (this->fuelType != nullptr) delete[] this->fuelType;
}

Vehicle& Vehicle::operator=(const Vehicle& rhs)
{
	if (this != &rhs)
	{
		setBrand(rhs.brand);
		setModel(rhs.model);
		setColor(rhs.color);
		setFuelType(rhs.fuelType);
	}
	return *this;
}

std::ostream& Vehicle::inserter(std::ostream& output) const
{
	output << "Brand: " << this->brand << std::endl;
	output << "Model: " << this->model << std::endl;
	output << "Color: " << this->color << std::endl;
	output << "Fuel Type: " << this->fuelType << std::endl;

	return output;
}

std::ostream& operator<<(std::ostream& lhs, const Vehicle& rhs)
{
	return rhs.inserter(lhs);
}

