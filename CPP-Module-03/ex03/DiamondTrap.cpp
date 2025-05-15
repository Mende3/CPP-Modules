#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (std::string name) : ClapTrap (name), ScavTrap(name), FragTrap (name)
{
    std::cout<<"[DiamondClap] Construtor padrão chamado"<<std::endl;
    _name = name;
    ClapTrap::_Name = name + "_clap_name";
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 30;
}

DiamondTrap::DiamondTrap (const DiamondTrap &other) : ClapTrap (other._Name), ScavTrap(other._Name), FragTrap(other
._Name)
{
    _name = other._name;
    std::cout<<"[DiamondTrap] Construtor cópia chamado"<<std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &other)
{
    std::cout<<"[DiamondTrap] operador de cópia chamado"<<std::endl;
    if (this == &other)
        return *this;
    _name = other.getName();
    ClapTrap::_Name = other.ClapTrap::_Name;
    _HitPoints = other.FragTrap::_HitPoints;
    _EnergyPoints = other.ScavTrap::_HitPoints;
    _AttackDamage = other.FragTrap::_AttackDamage;
    return *this;
}

DiamondTrap::~DiamondTrap ( void )
{
    std::cout<<"[DiamondTrap] Destrutor chamado"<<std::endl;    
}

void DiamondTrap::whoIam()
{
    std::cout<<"[DiamondTrap] eu chamo me "<< DiamondTrap::_name
    << " e eu tenho um parente chamado "<< ClapTrap::_Name
    <<std::endl;    
}