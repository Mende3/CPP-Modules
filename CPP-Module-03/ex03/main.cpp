/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:55:47 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:55:48 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ( void )
{
    DiamondTrap diamond1 ("Small");
    std::cout<<std::endl;
    diamond1.attack("Killer");
    diamond1.takeDamage(30);
    diamond1.beRepaired (20);
    diamond1.whoIam();
    std::cout<<std::endl;
}
