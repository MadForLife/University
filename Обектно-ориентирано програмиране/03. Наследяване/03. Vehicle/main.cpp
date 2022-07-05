#include "Vehicle.h"
#include "InsuredItem.h"
#include "Car.h"
#include <iostream>

int main()
{
	Car c1("Alfa Romeo", "147 TSpark", "Silver", "A95", "LM2300MF", 11062021, 11092021, 4, 4, 150);

	Vehicle* car2 = new Car("Subaru", "Impreza", "Silver", "Diesel", "DI1569LF", 11092007, 07052022, 4, 4, 529);

	std::cout << c1 << std::endl;
	std::cout << *car2 << std::endl;


	return 0;
}