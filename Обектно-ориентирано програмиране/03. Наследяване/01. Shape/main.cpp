#include  "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

#include <iostream>

int main()
{
	Rectangle rect;
	Triangle triangle;

	rect.set_data(5, 3);
	triangle.set_data(2, 5);

	std::cout << rect.area() << std::endl;
	std::cout << triangle.area() << std::endl;

	return 0;
}