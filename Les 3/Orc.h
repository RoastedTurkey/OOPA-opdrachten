#pragma once

#include "Npc.h"
#include <string>

class Orc :
	public Npc
{
		std::string name;
	public:
		Orc(std::string nam);
		virtual ~Orc();
		void render();
};

