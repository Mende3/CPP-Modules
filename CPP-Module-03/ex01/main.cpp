/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:51:05 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:51:07 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
  scav2.guardGate ();
}
