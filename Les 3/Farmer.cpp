#include "Farmer.h"
#include <iostream>


Farmer::Farmer(Npc* n)
	: Classes(n)
{
}


Farmer::~Farmer()
{
}

void Farmer::render()
{
	Classes::render();
	std::cout << "- toegevoegd: Farmer class" << std::endl;
}
