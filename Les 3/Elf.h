#pragma once

#include "Npc.h"
#include <string>

class Elf :
	public Npc
{
		std::string name;
	public:
		Elf(std::string name);
		virtual ~Elf();
		void render();
};

