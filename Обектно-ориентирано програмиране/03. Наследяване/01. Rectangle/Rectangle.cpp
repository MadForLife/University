#include "Rectangle.h"

Rectangle::Rectangle()
{
	x = 0;
	y = 0;
}

Rectangle::Rectangle(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Rectangle::setX(double x)
{
	this->x = x;
}

void Rectangle::setY(double y)
{
	this->y = y;
}

double Rectangle::Area()
{
	return x * y;
}