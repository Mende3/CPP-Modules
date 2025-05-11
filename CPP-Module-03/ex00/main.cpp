#include <iostream>
#include "ClapTrap.hpp"

int main (void)
{
    ClapTrap a ("Rui");
    ClapTrap b ("Mendes");
    ClapTrap c ("Frank");
    std::cout<<std::endl;

    a.attack ("Amilton");
    a.takeDamage (2);
    a.beRepaired (1);
    a.setEnergyPoints (1);
    a.attack ("Amilton");
    a.getEnergyPoints();
    a.getHitPoints();
    a.attack ("Clear");
    std::cout<<std::endl;

    b.setEnergyPoints (0);
    b.attack ("Fer");
    std::cout<<std::endl;
    
    c.takeDamage (11);
    c.takeDamage (11);
    c.beRepaired (10);
    std::cout<<std::endl;

    return 0;
}