#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *_weapon;
        std::string _name;

    public:
        HumanB(std::string name);

        void setWeapon (Weapon &TypeClub);
        void attack ();
};

#endif