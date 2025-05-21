/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:50:53 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:50:56 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap()
{
    std::cout<<"[ScavTrap] Constructor Padrão chamado"<<std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
    std::cout<<"[ScavTrap] Constructor chamado"<<std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout <<"[ScavTrap] operador de cópia chamado" << std::endl;
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    return *this;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "[ScavTrap] Construtor de cópia chamado"<<std::endl;
}
ScavTrap::~ScavTrap() {std::cout <<"[ScavTrap] destrutor chamado"<<std::endl;}

void ScavTrap::attack (const std::string& target)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout <<"[ScavTrap] "<<_name<<" não pode efetuar ataques. hitPoints: "<<_hitPoints<<", EnergyPoints: "<<_energyPoints<<std::endl;
        return;
    }
    _energyPoints--;
    std::cout <<"[ScavTrap] "<<_name<<" atacou "<<target<<" descontando 20 de danos. EnergyPoints: "<<_energyPoints<<std::endl;
}

void ScavTrap::guardGate ()
{
    std::cout<<"[ScapTrap] "<<_name<<" está em modo GateKeeper"<<std::endl;
} 
