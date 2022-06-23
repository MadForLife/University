#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
	private:
		char* brand;
		char* model;
		unsigned doors;
		unsigned horsepower;
		unsigned year;
		unsigned fuelCapacity;
		double price;

	public:
		Car();
		Car(const char* brand, const char* model, unsigned doors, unsigned horsepower, unsigned year, unsigned fuelCapacity, double price);
		Car(const Car& rhs);
		Car& operator=(const Car& rhs);
		~Car();

		Car operator+(const Car& rhs) const;
		Car operator+(int rhs) const;

		Car& operator+=(const Car& rhs);
		Car& operator+=(int rhs);

		Car& operator++();	  // Prefix increment operator
		Car& operator++(int); // Postfix increment operator

		Car& operator--();
		Car operator--(int);

		Car operator%(int rhs) const;

		bool operator>(const Car& rhs) const;
		bool operator==(const Car& rhs) const;

		operator int() const;

		std::ostream& inserter(std::ostream& output) const;
};

Car operator+(int lhs, const Car& rhs);

std::ostream& operator<<(std::ostream& lhs, const Car& rhs);

#endif // !CAR_H
