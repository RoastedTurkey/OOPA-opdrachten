#pragma once

#include "Classes.h"

class Farmer :
	public Classes
{
	public:
		Farmer(Npc* n);
		virtual ~Farmer();
		void render();
};

