#ifndef PERSON_H
#define PERSON_H

class Person
{
	private:
		char* name;
		double weight;
		unsigned height;

	public:
		Person();
		Person(const char* name, int height, int weight);
		~Person();

		void setName(const char* name);
		void setHeight(unsigned height);
		void setWeight(double weight);

		char* getName() const;
		unsigned getHeight() const;
		double getWeight() const;

		void read();

		double bmi() const;
		void print() const;
		void state() const;

		static double caloriesIndex(const Person& lhs, const Person& rhs)
		{
			return (lhs.height - rhs.height) * (lhs.height - rhs.height) +
				(lhs.weight - rhs.weight) * (lhs.weight - rhs.weight);
		}
};

#endif // !PERSON_H
