#include <vector>
#include <iostream>
#include "Module.h"

int main()
{
	std::vector<Module*> modules;
	std::vector<Student*> alleStudenten;
	std::vector<Docent*> alleDocenten;

	alleStudenten.push_back(new Student("Piet"));
	alleStudenten.push_back(new Student("Jan"));
	alleStudenten.push_back(new Student("Klaas"));
	alleStudenten.push_back(new Student("Alfred"));
	alleStudenten.push_back(new Student("Jodocus"));
	alleStudenten.push_back(new Student("Paul"));
	alleStudenten.push_back(new Student("Lana"));
	alleStudenten.push_back(new Student("Yussef"));
	alleStudenten.push_back(new Student("Shantal"));
	alleStudenten.push_back(new Student("Debbie"));

	alleDocenten.push_back(new Docent("Edwin"));
	alleDocenten.push_back(new Docent("Micah"));
	alleDocenten.push_back(new Docent("Raf"));
	alleDocenten.push_back(new Docent("Stephan"));

	modules.push_back(new Module("Programmeren", 2));
	modules.push_back(new Module("Tekenen", 2));
	modules.push_back(new Module("Deisgn", 2));

	modules[0]->assignDocent(alleDocenten[0]);
	modules[1]->assignDocent(alleDocenten[2]);
	modules[1]->assignDocent(alleDocenten[3]);
	modules[2]->assignDocent(alleDocenten[1]);

	modules[0]->assignStudent(alleStudenten[0]);
	modules[1]->assignStudent(alleStudenten[0]);

	modules[1]->assignStudent(alleStudenten[1]);
	modules[2]->assignStudent(alleStudenten[1]);

	modules[2]->assignStudent(alleStudenten[2]);
	modules[0]->assignStudent(alleStudenten[2]);

	modules[0]->assignStudent(alleStudenten[3]);
	modules[1]->assignStudent(alleStudenten[3]);
	modules[2]->assignStudent(alleStudenten[3]);

	modules[0]->assignStudent(alleStudenten[4]);
	modules[1]->assignStudent(alleStudenten[4]);
	modules[2]->assignStudent(alleStudenten[4]);

	modules[0]->assignStudent(alleStudenten[5]);
	modules[0]->assignStudent(alleStudenten[6]);
	modules[1]->assignStudent(alleStudenten[7]);
	modules[1]->assignStudent(alleStudenten[8]);
	modules[0]->assignStudent(alleStudenten[9]);

	for (int i = 0; i < modules.size(); i++)
	{
		modules[i]->list();
	}

	std::cout << "---- All Students and their ECs:" << std::endl;
	for (int i = 0; i < alleStudenten.size(); i++)
	{
		std::cout << alleStudenten[i]->getName() << ": " 
			<< alleStudenten[i]->getEC() << std::endl;
	}

	modules[2]->changeEC(4);

	std::cout << "---- All Students and their ECs:" << std::endl;
	for (int i = 0; i < alleStudenten.size(); i++)
	{
		std::cout << alleStudenten[i]->getName() << ": "
			<< alleStudenten[i]->getEC() << std::endl;
	}

	modules[2]->removeStudent("Alfred");
	modules[2]->list();

	std::cout << "---- All Students and their ECs:" << std::endl;
	for (int i = 0; i < alleStudenten.size(); i++)
	{
		std::cout << alleStudenten[i]->getName() << ": "
			<< alleStudenten[i]->getEC() << std::endl;
	}


	char ch;

	std::cin >> ch;

	return 0;
}