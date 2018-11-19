#include "Module.h"



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
}

void Module::changeEC()
{
}

void Module::assignStudent(Student *)
{
}

void Module::removeStudent(std::string naam)
{
}

void Module::assignDocent(Docent *)
{
}
