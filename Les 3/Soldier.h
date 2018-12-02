#pragma once

#include "Classes.h"

class Soldier :
	public Classes
{
	public:
		Soldier(Npc* n);
		virtual ~Soldier();
		void render();
};

