#include <iostream>
#include "Zebra.h"
#include "Dolphin.h"
int main()
{
	Zebra zeb;
	Dolphin dol;

	char name1[10] = "Iris";
	char name2[10] = "May";

	zeb.set_data(5, name1);
	dol.set_data(2, name2);

	zeb.message_zebra();
	dol.message_dolphin();
	
	return 0;
}