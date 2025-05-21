/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:48:06 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:48:17 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout <<"[ClapTrap] constructor padrão chamado" << std::endl;
}

ClapTrap::ClapTrap (std::string name) : _name(name) 
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout <<"[ClapTrap] constructor chamado" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &other)
{
    std::cout << "[ClapTrap] Construtor de cópia chamado"<<std::endl;
    *this = other;
}

ClapTrap::~ClapTrap () { std::cout <<"[ClapTrap] destrutor chamado"<<std::endl;}


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout <<"[ClapTrap] operador de cópia chamado" << std::endl;
    if (this == &other)
        return *this;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}


void ClapTrap::attack (const std::string& target)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout <<"[ClapTrap] "<<_name<<" não pode efetuar ataques. hitPoints: "<<_hitPoints<<", EnergyPoints: "<<_energyPoints<<std::endl;
        return;
    }
    _energyPoints--;
    std::cout <<"[ClapTrap] "<<_name<<" atacou "<<target<<" descontando "<<_attackDamage<<" de dano. EnergyPoints: "<<_energyPoints<<std::endl;
}
void ClapTrap::takeDamage (unsigned int amount)
{
    if (_hitPoints < 1)
    {
        std::cout<<"[ClapTrap] "<<_name<<" já está com 0 de vida"<<std::endl;
        return;
    }
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout<<"[ClapTrap] "<<_name<<" tomou "<<amount<<" de danos. HitPoints: "<<_hitPoints<<std::endl;
}
void ClapTrap::beRepaired (unsigned int amount)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout <<"[ClapTrap] "<<_name<<" não pode recuperar se. hitPoints: "<<_hitPoints<<", EnergyPoints: "<<_energyPoints<<std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout <<"[ClapTrap] "<<_name<<" recuperou "<<amount<<" de vida. HitPoint: "<<_hitPoints<<", EnergyPoints: "<<_energyPoints<<std::endl;
}

