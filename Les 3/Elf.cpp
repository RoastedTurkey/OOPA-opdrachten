#include "Elf.h"
#include <iostream>


Elf::Elf(std::string nam)
	: name(nam)
{
}


Elf::~Elf()
{
}

void Elf::render()
{
	std::cout << "Elf Npc: " << name << std::endl;
}
