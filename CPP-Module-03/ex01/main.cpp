#include "ScavTrap.hpp"

int main()
{
  ScavTrap scav1 ("Mendes");
  scav1.attack("Eliandro");
  scav1.beRepaired (3);
  scav1.takeDamage (100);
  scav1.beRepaired (100);
  std::cout<<std::endl;

  ScavTrap scav2 = scav1;
  std::cout<<scav2.getName()<<std::endl;
  scav2.guardGate ();
}