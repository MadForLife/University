#ifndef PROPERTY_H
#define	PROPERTY_H

#include <iostream>

class Property
{
	private:
		char* owner;
	protected:
		float price;
	public:
		Property();
		Property(const char* owner, float price);
		Property(const Property& rhs);
		Property& operator=(const Property& rhs);
		~Property();

		std::ostream& inserter(std::ostream& output) const;

		virtual float taxCalculation() = 0;
};

std::ostream& operator<<(std::ostream& lhs, const Property& rhs);

#endif // !PROPERTY_H
