#include "Card.h"
#include <iostream>

int main()
{
	Card card("Ustoite na zemqta", "Ken Folet", 5);
	Card card2(card);
	Card card3;

	std::cout << "card1: \n" << card << std::endl;

	std::cout << "card2: copy constructor used\n" << card2 << std::endl;

	std::cout << "card3: default constructor\n" << card3 << std::endl;

	card3 = card;
	std::cout << "card3 = card:\n" << card3 << std::endl;

	return 0;
}