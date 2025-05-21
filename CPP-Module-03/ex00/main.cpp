/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:48:43 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:48:45 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    a.attack ("Amilton");
    a.attack ("Clear");
    std::cout<<std::endl;

    b.attack ("Fer");
    std::cout<<std::endl;
    
    c.takeDamage (11);
    c.takeDamage (11);
    c.beRepaired (10);
    std::cout<<std::endl;

    return 0;
}
