#include "Module.h"
#include <iostream>


Module::Module()
	: naam(std::string("naamloos")), ec(0)
{
}

Module::Module(std::string nm, int pnt)
	: naam(nm), ec(pnt)
{
}
 
Module::~Module()
{	
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end())
	{
		delete *it;
		it++;
	}

	std::vector<Docent*>::iterator ite = docenten.begin();
	while (ite != docenten.end())
	{
		delete *ite;
		ite++;
	}
}

void Module::changeEC(int nieuw)
{
	std::vector<Student*>::iterator it = studenten.begin();
	int delta = nieuw - ec;

	while (it != studenten.end())
	{
		(*it)->updateEC(delta);
		it++;
	}	
	std::cout << "EC value of " << naam << " changed from: " 
		<< ec << " to " << nieuw << std::endl;
	std::cout << "---- updated student totals" << std::endl;
	ec = nieuw;
}

void Module::assignStudent(Student* s)
{
	studenten.push_back(s);
	s->updateEC(ec);
}

void Module::assignDocent(Docent* d)
{
	docenten.push_back(d);
}

void Module::removeStudent(std::string naam)
{
	std::vector<Student*>::iterator it = studenten.begin();

	while (it != studenten.end())
	{
		if ((*it)->getName() == naam)
		{
			(*it)->updateEC(ec * -1);
			std::cout << "Managed to get away from " << this->naam << ": "
				<< naam << std::endl;
			delete *it;
			it = studenten.erase(it);
		}
		else
		{
			it++;
		}
	}
}

void Module::removeDocent(std::string naam)
{
	std::vector<Docent*>::iterator it = docenten.begin();

	while (it != docenten.end())
	{
		if ((*it)->getName() == naam)
		{
			std::cout << "Is getting to old for this shit: " << naam << std::endl;
			delete *it;
			it = docenten.erase(it);
		}
		else
		{
			it++;
		}
	}
}

void Module::list()
{
	std::cout << "---- Class: " << naam << std::endl;
	std::cout << "--- EC: " << ec << std::endl;
	std::cout << "--- Teacher(s):" << std::endl;
	std::vector<Docent*>::iterator ite = docenten.begin();
	while (ite != docenten.end())
	{
		std::cout << "- " << (*ite)->getName() << std::endl;
		ite++;
	}

	std::cout << "--- Student(s):" << std::endl;
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end())
	{
		std::cout << "- " << (*it)->getName() << std::endl;
		it++;
	}

	std::cout << "------------------" << std::endl;
}
