#pragma once
#include "Persoon.h"
class Docent :
	public Persoon
{
	public:
		Docent();
		Docent(std::string nm);
		virtual ~Docent();
};

