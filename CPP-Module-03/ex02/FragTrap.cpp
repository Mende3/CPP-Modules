/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:52:15 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:52:16 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap () : ClapTrap ()
{
    std::cout << "[FragTrap] constructor padrão chamado"<<std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}


FragTrap::FragTrap (std::string name) : ClapTrap (name)
{
    std::cout << "[FragTrap] constructor chamado"<<std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap (const FragTrap &other) : ClapTrap (other)
{
    std::cout << "[FragTrap] construtor de cópia chamado"<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    return *this;   
}


FragTrap::~FragTrap ()
{
    std::cout<<"[FragTrap] desturctor chamado"<<std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout<<"[FragTrap] Olá pessoal, eu sou o "<<_name<<" desejo pra vocês um dia positivo."<<std::endl;
}
