#include "Npc.h"



Npc::Npc()
{
}


Npc::~Npc()
{
}

Npc * Npc::makeNpc(std::string naam, int type, bool farmr, bool soldr, bool shamn)
{
	Npc* npc;
	if (type == 1)
	{
		npc = new Orc(naam);
	}
	else if (type == 2)
	{
		npc = new Elf(naam);
	}
	if (farmr)
	{
		npc = new Farmer(npc);
	}
	if (soldr)
	{
		npc = new Soldier(npc);
	}
	if (shamn)
	{
		npc = new Shaman(npc);
	}
	return npc;
}
