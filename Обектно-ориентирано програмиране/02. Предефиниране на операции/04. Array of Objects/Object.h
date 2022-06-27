#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>

class Object
{
	private:
		char* name;

	public:
		Object();
		Object(const char* name);
		Object(const Object& rhs);
		Object& operator=(const Object& rhs);
		~Object();

		std::ostream& inserter(std::ostream& output) const;
};

std::ostream& operator<<(std::ostream& lhs, const Object& rhs);

#endif // !OBJECT_H
