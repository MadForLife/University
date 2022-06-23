#include "Car.h"

Car::Car()
{
	brand = new char[2];
	model = new char[2];

	strcpy_s(brand, 2, " ");
	strcpy_s(model, 2, " ");

	doors = 0;
	horsepower = 0;
	year = 0;
	fuelCapacity = 0;
	price = .0;
}

Car::Car(const char* brand, const char* model, unsigned doors, unsigned horsepower, unsigned year, unsigned fuelCapacity, double price)
{
	this->brand = new char[strlen(brand) + 1];
	this->model = new char[strlen(model) + 1];

	strcpy_s(this->brand, strlen(brand) + 1, brand);
	strcpy_s(this->model, strlen(model) + 1, model);

	this->doors = doors;
	this->horsepower = horsepower;
	this->year = year;
	this->fuelCapacity = fuelCapacity;
	this->price = price;
}

Car::Car(const Car& rhs)
{
	this->brand = new char[strlen(rhs.brand) + 1];
	this->model = new char[strlen(rhs.model) + 1];

	strcpy_s(this->brand, strlen(rhs.brand) + 1, rhs.brand);
	strcpy_s(this->model, strlen(rhs.model) + 1, rhs.model);

	this->doors = rhs.doors;
	this->horsepower = rhs.horsepower;
	this->year = rhs.year;
	this->fuelCapacity = rhs.fuelCapacity;
	this->price = rhs.price;
}

Car& Car::operator=(const Car& rhs)
{
	if (this != &rhs)
	{
		this->brand = new char[strlen(rhs.brand) + 1];
		this->model = new char[strlen(rhs.model) + 1];

		strcpy_s(this->brand, strlen(rhs.brand) + 1, rhs.brand);
		strcpy_s(this->model, strlen(rhs.model) + 1, rhs.model);

		this->doors = rhs.doors;
		this->horsepower = rhs.horsepower;
		this->year = rhs.year;
		this->fuelCapacity = rhs.fuelCapacity;
		this->price = rhs.price;
	}
	return *this;
}
Car::~Car()
{
	if (this->brand != nullptr) delete[] this->brand;
	if (this->model != nullptr) delete[] this->model;
}

Car Car::operator+(const Car& rhs) const
{
	return Car(this->brand, this->model, this->doors, this->horsepower + rhs.horsepower, this->year, this->fuelCapacity, this->price);
}

Car Car::operator+(int rhs) const
{
	return Car(this->brand, this->model, this->doors, this->horsepower + rhs, this->year, this->fuelCapacity, this->price);
}

Car& Car::operator+=(const Car& rhs) 
{
	this->horsepower += rhs.horsepower;
	return *this;
}

Car& Car::operator+=(int rhs)
{
	this->horsepower += rhs;
	return *this;
}

Car& Car::operator++() // Prefix increment
{
	this->horsepower++;
	return* this;
}

Car& Car::operator++(int) // Postfix increment
{
	Car temp = *this;

	this->horsepower++;
	return temp;
}

Car& Car::operator--() // Prefix decrement
{
	this->horsepower--;
	return *this;
}
Car Car::operator--(int) // Postfix increment
{
	Car temp = *this;

	this->horsepower--;
	return temp;
}

Car Car::operator%(int rhs) const
{
	Car temp = *this;

	temp.price = price - price * (rhs * 10. / 100);
	return temp;
}

bool Car::operator>(const Car& rhs) const
{
	if (this->price > rhs.price) return true;
	else if (this->price == rhs.price && this->year < rhs.year) return true;
	else return false;
}

bool Car::operator==(const Car& rhs) const
{
	return
		this->doors == rhs.doors &&
		this->horsepower == rhs.horsepower &&
		this->year == rhs.year &&
		this->fuelCapacity == rhs.fuelCapacity &&
		this->price == rhs.price &&
		!strcmp(this->brand, rhs.brand) &&
		!strcmp(this->model, rhs.model);
}

Car::operator int() const
{
	return this->horsepower;
}

std::ostream& Car::inserter(std::ostream& output) const
{
	output << "Brand: " << this->brand << std::endl;
	output << "Model: " << this->model << std::endl;
	output << "Doors: " << this->doors << std::endl;
	output << "Horsepower: " << this->horsepower << std::endl;
	output << "Year: " << this->year << std::endl;
	output << "Fuel Capacity: " << this->fuelCapacity << std::endl;
	output << "Price: "<< this->price << std::endl;

	return output;
}

// commutativity
Car operator+(int lhs, const Car& rhs)
{
	return rhs + rhs;
}

std::ostream& operator<<(std::ostream& lhs, const Car& rhs)
{
	return rhs.inserter(lhs);
}