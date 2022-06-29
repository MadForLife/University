#include "Shape.h"

Shape::Shape()
{
	width = 0;
	height = 0;
}

Shape::Shape(float width, float height)
{
	this->width = width;
	this->height = height;
}

void Shape::set_data(float width, float height)
{
	this->width = width;
	this->height = height;
}