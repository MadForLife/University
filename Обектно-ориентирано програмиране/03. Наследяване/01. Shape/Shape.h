#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
	protected:
		float width;
		float height;
	public:
		Shape();
		Shape(float width, float height);

		void set_data(float width, float height);
};
#endif // !SHAPE_H