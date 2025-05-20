#include  "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap()
{
    std::cout<<"[ScavTrap] Constructor Padrão chamado"<<std::endl;
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
    std::cout<<"[ScavTrap] Constructor chamado"<<std::endl;
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout <<"[ScavTrap] operador de cópia chamado" << std::endl;
    if (this == &other)
        return *this;
    _Name = other.getName();
    _HitPoints = other.getHitPoints();
    _EnergyPoints = other.getEnergyPoints();
    _AttackDamage = other.getAttackDamage();
    return *this;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "[ScavTrap] Construtor de cópia chamado"<<std::endl;
}
ScavTrap::~ScavTrap() {std::cout <<"[ScavTrap] destrutor chamado"<<std::endl;}

void ScavTrap::attack (const std::string& target)
{
    if (_HitPoints <= 0 || _EnergyPoints <= 0)
    {
        std::cout <<"[ScavTrap] "<<getName()<<" não pode efetuar ataques. hitPoints: "<<getHitPoints()<<", EnergyPoints: "<<getEnergyPoints()<<std::endl;
        return;
    }
    _EnergyPoints--;
    std::cout <<"[ScavTrap] "<<getName()<<" atacou "<<target<<" descontando 20 de danos. EnergyPoints: "<<_EnergyPoints<<std::endl;
}

void ScavTrap::guardGate ()
{
    std::cout<<"[ScapTrap] "<<getName()<<" está em modo GateKeeper"<<std::endl;
}