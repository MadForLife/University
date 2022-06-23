#include "Card.h"

Card::Card()
{
	book = new char[2];
	author = new char[2];

	strcpy_s(book, 2, " ");
	strcpy_s(author, 2, " ");

	count = 0;
}

Card::Card(const char* book, const char* author, unsigned int count)
{
	this->book = new char[strlen(book) + 1];
	this->author = new char[strlen(author) + 1];

	strcpy_s(this->book, strlen(book) + 1, book);
	strcpy_s(this->author, strlen(author) + 1, author);

	this->count = count;
}

//COPY CONSTRUCTOR
Card::Card(const Card& rhs)
{
	this->book = new char[strlen(rhs.book) + 1];
	this->author = new char[strlen(rhs.author) + 1];

	strcpy_s(this->book, strlen(rhs.book) + 1, rhs.book);
	strcpy_s(this->author, strlen(rhs.author) + 1, rhs.author);

	this->count = rhs.count;
}


//OPERATOR= OVRELOAD
Card& Card::operator=(const Card& rhs)
{
	if (this != &rhs)
	{
		this->book = new char[strlen(rhs.book) + 1];
		this->author = new char[strlen(rhs.author) + 1];

		strcpy_s(this->book, strlen(rhs.book) + 1, rhs.book);
		strcpy_s(this->author, strlen(rhs.author) + 1, rhs.author);

		this->count = rhs.count;
	}
	return *this;
}

//INSERTER
std::ostream& Card::inseter(std::ostream& output) const
{
	output << "Book name: " << book << std::endl;
	output << "Author: " << author << std::endl;
	output << "Number of copies: " << count << std::endl;

	return output;
}

//LEFT SHIFT << OVERLOAD
std::ostream& operator<<(std::ostream& lhs, const Card& rhs)
{
	return rhs.inseter(lhs);
}


Card::~Card()
{
	if (this->book != nullptr) delete[] this->book;
	if (this->author != nullptr) delete[] this->author;
}



void Card::setBookName(const char* book)
{
	this->book = new char[strlen(book) + 1];
	strcpy_s(this->book, strlen(book) + 1, book);
}

void Card::setAuthorName(const char* author)
{
	this->author = new char[strlen(author) + 1];
	strcpy_s(this->author, strlen(author) + 1, author);
}

void Card::setCounter(unsigned int count)
{
	this->count = count;
}