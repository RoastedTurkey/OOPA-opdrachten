#include "Shaman.h"
#include <iostream>


Shaman::Shaman(Npc* n)
	: Classes(n)
{
}


Shaman::~Shaman()
{
}

void Shaman::render()
{
	Classes::render();
	std::cout << "- toegevoegd: Shaman class" << std::endl;
}
