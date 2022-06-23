#include "Student.h"
#include <iostream>

int main()
{
	Student s1("Parvan", "Hristov", "F000000", 20, 4.50);
	Student s2("Rositsa", "Vasileva", "F159753", 25, 5.00);
	Student s3;
	Student s4(s2);

	std::cout << "Default Student: \n";
	std::cout << s3 << std::endl;

	s3 = s2;
	std::cout << "Operator =: \n";
	std::cout << s3 << std::endl;

	std::cout << "Copy constructor: \n";
	std::cout << s4 << std::endl;
	return 0;
}