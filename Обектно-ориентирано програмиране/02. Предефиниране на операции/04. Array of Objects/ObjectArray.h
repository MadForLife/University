#ifndef OBJECTARRAY_H
#define OBJECTARRAY_H

#include "Object.h"

class ObjectArray
{
	private:
		unsigned initial_capacity;
		Object* items;

	public:
		ObjectArray(unsigned capacity = 0, Object* = nullptr);
		ObjectArray(const ObjectArray& rhs);
		~ObjectArray();

		ObjectArray& operator=(const ObjectArray& rhs);

		//<тип на връщан обект> <operator><знак>();
		Object operator[] (unsigned index) const; //по стойност (аксесор)
		Object& operator[] (unsigned index); //по референция (мутатор)

		Object operator()() const;

};

#endif // !OBJECTARRAY_H
