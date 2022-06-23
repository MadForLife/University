#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <cstring>

class Card
{
	private:
		char* book;
		char* author;
		unsigned int count; //number of copies

	public:
		Card();
		Card(const char* book, const char* author, unsigned int count);
		Card(const Card& rhs);
		Card& operator=(const Card& rhs);
		~Card();

		void setBookName(const char* book);
		void setAuthorName(const char* author);
		void setCounter(unsigned int count);

		std::ostream& inseter(std::ostream& output) const;
};

std::ostream& operator<<(std::ostream& lhs, const Card& rhs);

#endif // !CARD_H
