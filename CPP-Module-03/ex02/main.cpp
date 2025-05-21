/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:52:30 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:52:31 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
  return 0;
}
