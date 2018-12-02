#include "Classes.h"



Classes::Classes(Npc* n)
{
	theNpc = n;
}


Classes::~Classes()
{
	if (theNpc)
	{
		delete theNpc;
	}
}

void Classes::render()
{
	theNpc->render();
}
