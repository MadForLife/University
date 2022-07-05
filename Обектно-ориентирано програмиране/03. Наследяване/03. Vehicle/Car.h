#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "InsuredItem.h"
#include <iostream>

class Car : public Vehicle, public InsuredItem
{
	private:
		int doors;
		int wheels;
		int horsepower;

	public:
		Car();
		Car(const char* brand, const char* model, const char* color, const char* fuelType,
			const char* regNumber, int validFrom, int validTo, int door, int wheels, int horsepower);
		Car(const Car& rhs);
		~Car();

		Car& operator=(const Car& rhs);

		virtual std::ostream& inserter(std::ostream& output) const;
};

std::ostream& operator<<(std::ostream& lhs, const Car& rhs);
#endif // !CAR_H
