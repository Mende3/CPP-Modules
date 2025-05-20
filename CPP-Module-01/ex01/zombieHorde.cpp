#include "Zombie.hpp"

Zombie* zombieHorde (int n, std::string name)
{
    Zombie *horde;

    horde = new Zombie[n];
    for (int i = 0; i < n; ++i)
    {
	std::ostringstream oss;
	oss << name << i;
	horde[i].setName(oss.str());
    }
    return horde;
}
