#pragma once
#include <string>

class Persoon
{
	public:
		Persoon();
		Persoon(std::string nm);
		virtual ~Persoon();

		std::string getName();

	private:
		std::string naam;
};

