// Created by tde-sous on 14-01-2024.

#include "FragTrap.hpp"

int main() {
  FragTrap frag1 ("Mendes");
  frag1.highFivesGuys ();
  frag1.attack("Flipe");
  frag1.takeDamage (100);
  frag1.attack ("Frank");
  frag1.beRepaired (1);
  std::cout<<std::endl;

  FragTrap frag2 = frag1;
  std::cout << frag2.getName() <<std::endl;
  return 0;
}