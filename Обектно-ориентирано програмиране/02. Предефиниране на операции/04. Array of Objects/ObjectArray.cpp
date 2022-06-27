#include "ObjectArray.h"

ObjectArray::ObjectArray(unsigned capacity, Object* arr) : initial_capacity(capacity)
{
	if (capacity > 0)
	{
		this->items = new Object[capacity];
	}

	if (arr != nullptr)
	{
		for (int i = 0; i < capacity; i++)
		{
			this->items[i] = arr[i];
		}
	}
}

ObjectArray::ObjectArray(const ObjectArray& rhs) : initial_capacity(rhs.initial_capacity)
{
	if (initial_capacity > 0)
	{
		this->items = new Object[initial_capacity];
	}

	if (rhs.items != nullptr)
	{
		for (int i = 0; i < initial_capacity; i++)
		{
			this->items[i] = rhs.items[i];
		}
	}
}

ObjectArray::~ObjectArray()
{
	if (items != nullptr) delete[] items;
}

ObjectArray& ObjectArray::operator=(const ObjectArray& rhs)
{
	if (this != &rhs)
	{
		if (items != nullptr)
		{
			delete[] items;
			items = nullptr;
		}

		if (rhs.initial_capacity > 0)
		{
			initial_capacity = rhs.initial_capacity;
			this->items = new Object[initial_capacity];
		}

		if (rhs.items != nullptr)
		{
			for (int i = 0; i < initial_capacity; i++)
			{
				this->items[i] = rhs.items[i];
			}
		}
	}
	return *this;
}

Object ObjectArray::operator[](unsigned index) const
{
	return items[index];
}

Object& ObjectArray::operator[](unsigned index)
{
	return items[index];
}

//връща първия елемент от масива
Object ObjectArray::operator()() const
{
	return items[0];
}