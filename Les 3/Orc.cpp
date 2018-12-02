#include "Orc.h"
#include <iostream>


Orc::Orc(std::string nam)
	: name(nam)
{
}


Orc::~Orc()
{
}

void Orc::render()
{
	std::cout << "Orc Npc: " << name << std::endl;
}
