#include <iostream>
#include "Object.h"
#include "ObjectArray.h"

int main()
{
	Object obj1("obj1"), obj2("obj2");
	Object objArr[] = { obj1, obj2 };

	ObjectArray arr(2, objArr);

	for (int i = 0; i < 2; i++)
	{
		std::cout << arr[i] << "\n";
	}

	std::cout << "operator()\n";
	std::cout << arr();


	return 0;
}