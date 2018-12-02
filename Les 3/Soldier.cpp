#include "Soldier.h"
#include <iostream>


Soldier::Soldier(Npc* n)
	: Classes(n)
{
}


Soldier::~Soldier()
{
}

void Soldier::render()
{
	Classes::render();
	std::cout << "- toegevoegd: Soldier class" << std::endl;
}
