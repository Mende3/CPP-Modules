/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:55:13 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:55:15 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>


DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name)
{
    std::cout << "<DiamondTrap " << this->_name << "> Status: Created" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other._name + "_clap_name"), ScavTrap(other._name + "_clap_name"), FragTrap(other._name + "_clap_name"), _name(other._name)
{
    std::cout << "[DiamondTrap] Construtor cópia chamado" << std::endl;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
    std::cout << "[DiamondTrap] Operador de cópia chamado" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap] Destrutor chamado" << std::endl;
}

void DiamondTrap::whoIam()
{
    std::cout << "[DiamondTrap] Eu me chamo " << _name
              << " e herdo de ClapTrap chamado " << ClapTrap::_name << std::endl;
}
