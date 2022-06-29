#include <iostream>
#include "Rectangle.h"

int main()
{
	Rectangle rect;
	Rectangle rect1(10.5, 4.3);

	rect.setX(10);
	rect.setY(5);

	std::cout << "Area: " << rect.Area() << std::endl;
	std::cout << "Area: " << rect1.Area() << std::endl;

	return 0;
}