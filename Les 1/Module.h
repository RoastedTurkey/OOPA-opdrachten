#pragma once
#include <vector>
#include <string>
#include "Student.h"
#include "Docent.h"

class Module
{
	public:
		Module();
		Module(std::string nm, int pnt);
		virtual ~Module();
		
		void changeEC();
		void assignDocent(Docent*);
		void assignStudent(Student*);
		void removeStudent(std::string naam);

	private:
		std::string naam;
		int ec;
		std::vector<Student*> studenten;
		std::vector<Docent*> docenten;
};

