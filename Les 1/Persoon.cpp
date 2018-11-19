#include "Persoon.h"



Persoon::Persoon()
	: naam(std::string("naamloos"))
{
}

Persoon::Persoon(std::string nm)
	: naam(nm)
{
}

Persoon::~Persoon()
{
}

std::string Persoon::getName()
{
	return naam;
}
