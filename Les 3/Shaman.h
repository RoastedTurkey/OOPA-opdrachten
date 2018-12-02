#pragma once

#include "Classes.h"

class Shaman :
	public Classes
{
	public:
		Shaman(Npc* n);
		virtual ~Shaman();
		void render();
};

