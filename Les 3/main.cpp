#include <vector>
#include <iostream>

#include "Npc.h"

void draw(std::vector<Npc*> npcs)
{
	for (auto& npc : npcs)
	{
		std::cout << "---" << std::endl;
		npc->render();
	}
	std::cout << "---" << std::endl;
}

int main()
{
	std::vector<Npc*> npcs;

	Npc* npc;
	int npcType;
	bool farmer;
	bool soldier;
	bool shaman;
	std::string name;

	while (true)
	{
		std::cin >> npcType;

		if (npcType == 0)
		{
			break;
		}
		else
		{
			std::cin >> name;
			std::cin >> farmer;
			std::cin >> soldier;
			std::cin >> shaman;

			npc = Npc::makeNpc(name, npcType, farmer, soldier, shaman);
		}
		npcs.push_back(npc);
		draw(npcs);
	}

	//Npc* plainOrc = new Orc("Gordorg");
	//npcs.push_back(plainOrc);

	//Npc* superOrc = new Shaman(new Soldier(new Farmer(new Orc("Horrik"))));
	//npcs.push_back(superOrc);

	//Npc* soldierElf = new Soldier(new Elf("Elyvene"));
	//npcs.push_back(soldierElf);

	//draw(npcs);

	//delete plainOrc;
	//delete superOrc;
	//delete soldierElf;
}