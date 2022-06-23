#include "Car.h"
#include <iomanip>

using namespace std;

int main()
{
	Car car1;
	Car car2("Jeep", "Compass Trailhawk", 4, 180, 2018, 51, 52654);
	Car car3(car2);

	cout << car2 << endl;
	cout << "Upgrade: " << endl << car2 + 100 << endl;

	cout << "Current state: " << endl << car2 << endl;
	car2 += 300;
	cout << "After upgrade: " << endl;
	cout << car2 << endl;

	car1 = car2--;
	car3 = --car2;

	cout << "Car1: " << car1 << endl;
	cout << "Car2: " << car2 << endl;
	cout << "Car3: " << car3 << endl;

	cout << "Price after 5 years: " << car2 % 5 << endl;

	cout << "Is car2 > car 3? " << boolalpha << (car2 > car3) << endl;
	cout << "Is car3 == car1? " << boolalpha << (car3 == car1) << endl;

	return 0;
}