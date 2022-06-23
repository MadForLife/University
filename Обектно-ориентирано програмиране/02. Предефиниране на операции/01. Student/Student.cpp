#include "Student.h"

Student::Student()
{
	firstName = new char[2];
	lastName = new char[2];
	facultyNumber = new char[3];

	strcpy_s(firstName, 2, " ");
	strcpy_s(lastName, 2, " ");
	strcpy_s(facultyNumber, 3, "F/");

	age = 0;
	grade = 0;
}

Student::Student(const char* firstName, const char* lastName, const char* facultyNumber, int age, double grade)
{
	setFirstName(firstName);
	setLastName(lastName);
	setFacultyNumber(facultyNumber);
	setAge(age);
	setGrade(grade);
}

Student::~Student()
{
	if (this->firstName != nullptr) delete[] this->firstName;
	if (this->lastName != nullptr) delete[] this->lastName;
	if (this->facultyNumber != nullptr) delete[] this->facultyNumber;
}

//COPY CONSTRUCTOR
Student::Student(const Student& rhs)
{
	this->firstName = new char[strlen(rhs.firstName) + 1];
	this->lastName = new char[strlen(rhs.lastName) + 1];
	this->facultyNumber = new char[strlen(rhs.facultyNumber) + 1];

	strcpy_s(this->firstName, strlen(rhs.firstName) + 1, rhs.firstName);
	strcpy_s(this->lastName, strlen(rhs.lastName) + 1, rhs.lastName);
	strcpy_s(this->facultyNumber, strlen(rhs.facultyNumber) + 1, rhs.facultyNumber);

	this->age = rhs.age;
	this->grade = rhs.grade;
}

//OVERLOADED OPERATOR =
Student& Student::operator=(const Student& rhs)
{
	if (this != &rhs)
	{
		this->firstName = new char[strlen(rhs.firstName) + 1];
		this->lastName = new char[strlen(rhs.lastName) + 1];
		this->facultyNumber = new char[strlen(rhs.facultyNumber) + 1];

		strcpy_s(this->firstName, strlen(rhs.firstName) + 1, rhs.firstName);
		strcpy_s(this->lastName, strlen(rhs.lastName) + 1, rhs.lastName);
		strcpy_s(this->facultyNumber, strlen(rhs.facultyNumber) + 1, rhs.facultyNumber);
	}
	return *this;
}

//INSERTER (GIVES ACCESS TO PRIVATE PROPERTIES)
std::ostream& Student::inserter(std::ostream& output) const
{
	output << "First name: " << firstName << std::endl;
	output << "Last name: " << lastName << std::endl;
	output << "FN: " << facultyNumber << std::endl;
	output << "Age: " << age << std::endl;
	output << "Grade: " << grade << std::endl;

	return output;
}

//OVERLOADED LEFT SHIFT (OPERATOR<<)
std::ostream& operator<<(std::ostream& lhs, const Student& rhs)
{
	return rhs.inserter(lhs);
}


void Student::setFirstName(const char* firstName)
{
	this->firstName = new char[strlen(firstName) + 1];
	strcpy_s(this->firstName, strlen(firstName) + 1, firstName);
}

void Student::setLastName(const char* lastName)
{
	this->lastName = new char[strlen(lastName) + 1];
	strcpy_s(this->lastName, strlen(lastName) + 1, lastName);
}

void Student::setFacultyNumber(const char* facultyNumber)
{
	this->facultyNumber = new char[strlen(facultyNumber) + 1];
	strcpy_s(this->facultyNumber, strlen(facultyNumber) + 1, facultyNumber);
}

void Student::setAge(int age) { this->age = age; }
void Student::setGrade(double grade) { this->grade = grade; }

char* Student::getFirstName() const { return this->firstName; }
char* Student::getLastName() const { return this->lastName; }
char* Student::getFacultyNumber() const { return this->facultyNumber; }
int Student::getAge() const { return this->age; }
double Student::getGrade() const { return this->grade; }