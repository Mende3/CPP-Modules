#include "FragTrap.hpp"

FragTrap::FragTrap (std::string name) : ClapTrap (name)
{
    std::cout << "[FragTrap] constructor padrão chamado"<<std::endl;
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap (const FragTrap &other) : ClapTrap (other)
{
    std::cout << "[FragTrap] construtor de cópia chamado"<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    if (this == &other)
        return *this;
    _Name = this->getName();
    _HitPoints = this->getHitPoints();
    _EnergyPoints = this->getEnergyPoints();
    _AttackDamage = this->getAttackDamage();
    return *this;   
}


FragTrap::~FragTrap ()
{
    std::cout<<"[FragTrap] desturctor chamado"<<std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout<<"[FragTrap] Olá pessoal, eu sou o "<<getName()<<" desejo pra vocês um dia positivo."<<std::endl;
}