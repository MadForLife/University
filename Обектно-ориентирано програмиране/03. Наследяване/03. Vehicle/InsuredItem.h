#ifndef INSUREDITEM_H
#define INSUREDITEM_H

#include <iostream>

class InsuredItem
{
	private:
		char* regNumber;
		int validFrom;
		int validTo;

	public:
		InsuredItem();
		InsuredItem(const char*, int, int);
		InsuredItem(const InsuredItem& rhs);
		~InsuredItem();

		InsuredItem& operator=(const InsuredItem& rhs);

		virtual std::ostream& inserter(std::ostream& output) const;
};

std::ostream& operator<<(std::ostream& lhs, const InsuredItem& rhs);

#endif // !INSUREDITEM_H
