#include "InsuredItem.h"
#include <iostream>

InsuredItem::InsuredItem()
{
	regNumber = new char[2];
	strcpy_s(regNumber, 2, " ");

	validFrom = 0;
	validTo = 0;
}

InsuredItem::InsuredItem(const char* regNumber, int validFrom, int validTo)
{
	this->regNumber = new char[strlen(regNumber) + 1];
	strcpy_s(this->regNumber, strlen(regNumber) + 1, regNumber);

	this->validFrom = validFrom;
	this->validTo = validTo;
}
InsuredItem::InsuredItem(const InsuredItem& rhs)
{
	this->regNumber = new char[strlen(rhs.regNumber) + 1];
	strcpy_s(this->regNumber, strlen(rhs.regNumber) + 1, rhs.regNumber);
}
InsuredItem::~InsuredItem()
{
	if (this->regNumber != nullptr) delete[] this->regNumber;
}

InsuredItem& InsuredItem::operator=(const InsuredItem& rhs)
{
	if (this != &rhs)
	{
		this->regNumber = new char[strlen(rhs.regNumber) + 1];
		strcpy_s(this->regNumber, strlen(rhs.regNumber) + 1, rhs.regNumber);

		this->validFrom = rhs.validFrom;
		this->validTo = rhs.validTo;
	}
	return *this;
}

std::ostream& InsuredItem::inserter(std::ostream& output) const
{
	output << "Registration Number: " << this->regNumber << std::endl;
	output << "Valid From: " << this->validFrom << std::endl;
	output << "Valid To: " << this->validTo << std::endl;

	return output;
}

std::ostream& operator<<(std::ostream& lhs, const InsuredItem& rhs)
{
	return rhs.inserter(lhs);
}
