#pragma once
#include "Persoon.h"
class Student :
	public Persoon
{
	public:
		Student();
		Student(std::string nm);
		virtual ~Student();

		int getEC();
		void updateEC(int p);

	private:
		int ec;
};

