#include "Person.h"
#include <iostream>

int main()
{
	int n = 0;

	std::cout << "Enter number of people: ";
	std::cin >> n;
	std::cin.ignore();

	Person* person = new Person[n];

	for (int i = 0; i < n; i++)
	{
		person[i].read();
	}

	for (int i = 0; i < n; i++)
	{
		person[i].print();

		std::cout << person[i].getName() << " has bmi: " << person[i].bmi() << std::endl;
		person[i].state();

		if (i < n - 1)
		{
			std::cout << "Calories index: " << Person::caloriesIndex(person[i], person[i + 1]) << std::endl;
		}
		std::cout << std::endl;
	}

	delete[] person;

	return 0;
}