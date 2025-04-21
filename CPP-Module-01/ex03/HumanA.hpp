#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &_weapon;
        std::string _name;

    public:
        HumanA(std::string name, Weapon &weapon);

        void attack ();
};



#endif