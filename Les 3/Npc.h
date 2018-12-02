#pragma once

#include <string>
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"

class Npc
{
	public:
		Npc();
		virtual ~Npc();
		//type: 1 = Orc, 2 = Elf
		static Npc* makeNpc(std::string naam, int type, bool farmr, bool soldr, bool shamn);
		virtual void render() = 0;
};

