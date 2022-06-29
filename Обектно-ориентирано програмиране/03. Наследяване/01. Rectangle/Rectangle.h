#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		double x;
		double y;

	public:
		Rectangle();
		Rectangle(double, double);

		void setX(double);
		void setY(double);

		double Area();
};

#endif // !RECTANGLE_H
