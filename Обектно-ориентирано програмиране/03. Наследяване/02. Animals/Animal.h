#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
	protected:
		int age;
		char name[10];

	public:
		void set_data(int age, char name[10]); 
};
#endif // !ANIMAL_H
