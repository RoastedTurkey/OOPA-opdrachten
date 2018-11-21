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
		
		void changeEC(int nieuw);
		void assignDocent(Docent* d);
		void assignStudent(Student* s);
		void removeStudent(std::string naam);
		void removeDocent(std::string naam);
		void list();

	private:
		std::string naam;
		int ec;
		std::vector<Student*> studenten;
		std::vector<Docent*> docenten;
};

