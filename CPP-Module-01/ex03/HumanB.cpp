#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
    _weapon (0),  _name (name) {}

void HumanB::setWeapon (Weapon &TypeClub)
{
    _weapon = &TypeClub;
}

void HumanB::attack ()
{
    std::cout << _name << "attacks with their" << _weapon->getType() <<std::endl;
}