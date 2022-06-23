#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

class Student
{
	private:
		char* firstName;
		char* lastName;
		char* facultyNumber;

		int age;
		double grade;

	public:

		Student();
		Student(const char*, const char*, const char*, int, double);
		~Student();

		Student(const Student& rhs);
		Student& operator=(const Student& rhs);

		void setFirstName(const char* firstName);
		void setLastName(const char* lastName);
		void setFacultyNumber(const char* facultyNumber);
		void setAge(int age);
		void setGrade(double grade);

		char* getFirstName() const;
		char* getLastName() const;
		char* getFacultyNumber() const;
		int getAge() const;
		double getGrade() const;

		std::ostream& inserter(std::ostream& output) const;

};

std::ostream& operator<<(std::ostream& lhs, const Student& rhs);

#endif // !STUDENT_H
