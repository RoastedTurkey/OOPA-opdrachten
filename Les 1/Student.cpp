#include "Student.h"



Student::Student()
	: Persoon()
{
}

Student::Student(std::string nm)
	: Persoon(nm)
{
}

Student::~Student()
{
}

int Student::getEC()
{
	return ec;
}

void Student::updateEC(int p)
{
	ec += p;
}
