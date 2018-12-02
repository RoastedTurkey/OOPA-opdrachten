#pragma once

#include "Npc.h"

class Classes :
	public Npc
{
		Npc* theNpc;
	public:
		Classes(Npc* n);
		virtual ~Classes();
		virtual void render();
};

