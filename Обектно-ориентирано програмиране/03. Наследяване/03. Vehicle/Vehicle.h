#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle
{
	private:
		char* brand;
		char* model;
		char* color;
		char* fuelType;

		void setBrand(const char* brand);
		void setModel(const char* model);
		void setColor(const char* color);
		void setFuelType(const char* fuelType);

	public:
		Vehicle();
		Vehicle(const char*, const char*, const char*, const char*);
		Vehicle(const Vehicle& rhs);
		~Vehicle();

		Vehicle& operator=(const Vehicle& rhs);

		virtual std::ostream& inserter(std::ostream& output) const;
};

std::ostream& operator<<(std::ostream& lhs, const Vehicle& rhs);

#endif // !VEHICLE_H
