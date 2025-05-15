#include "DiamondTrap.hpp"

int main ( void )
{
    DiamondTrap diamond1 ("Small");
    std::cout<<std::endl;
    std::cout << diamond1.getName() <<std::endl;
    std::cout << diamond1.getHitPoints() <<std::endl;
    std::cout << diamond1.getEnergyPoints() <<std::endl;
    std::cout << diamond1.getAttackDamage() <<std::endl;
    diamond1.attack("Killer");
    diamond1.takeDamage(30);
    diamond1.beRepaired (20);
    diamond1.whoIam();
    std::cout<<std::endl;
}