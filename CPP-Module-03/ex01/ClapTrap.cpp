#include "ClapTrap.hpp"

ClapTrap::ClapTrap () { std::cout <<"ClapTrap: Constructor padrão chamado" << std::endl; }
ClapTrap::ClapTrap (std::string name) : _Name(name) 
{
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 10;
    std::cout <<"ClapTrap: "<<_Name<<" Constructor de cópia chamado" << std::endl;
}
ClapTrap::~ClapTrap () { std::cout <<"ClapTrap: "<<_Name<<" destrutor chamado"<<std::endl;}


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
        return *this;
    this->_Name = other.getName();
    this->_HitPoints = other.getHitPoints();
    this->_EnergyPoints = other.getEnergyPoints();
    this->_AttackDamage = other.getAttackDamage();
    return *this;
}


void ClapTrap::attack (const std::string& target)
{
    if (_HitPoints <= 0 || _EnergyPoints <= 0)
    {
        std::cout <<"ClapTrap: "<<_Name<<" não pode efetuar ataques. hitPoints: "<<_HitPoints<<", EnergyPoints: "<<_EnergyPoints<<std::endl;
        return;
    }
    _EnergyPoints--;
    std::cout <<"ClapTrap: "<<_Name<<" atacou "<<target<<". EnergyPoints: "<<_EnergyPoints<<std::endl;
}
void ClapTrap::takeDamage (unsigned int amount)
{
    if (_HitPoints < 1)
    {
        std::cout<<"ClapTrap: "<<_Name<<" já está com 0 de vida"<<std::endl;
        return;
    }
    _HitPoints -= amount;
    if (_HitPoints < 0)
        _HitPoints = 0;
    std::cout<<"ClapTrap: "<<_Name<<" tomou "<<amount<<" de danos. HitPoint: "<<_HitPoints<<std::endl;
}
void ClapTrap::beRepaired (unsigned int amount)
{
    if (_HitPoints <= 0 || _EnergyPoints <= 0)
    {
        std::cout <<"ClapTrap: "<<_Name<<" não pode recuperar se. hitPoints: "<<_HitPoints<<", EnergyPoints: "<<_EnergyPoints<<std::endl;
        return;
    }
    _EnergyPoints--;
    _HitPoints += amount;
    std::cout <<"ClapTrap: "<<_Name<<" recuperou "<<amount<<" de vida. HitPoint: "<<_HitPoints<<", EnergyPoints: "<<_EnergyPoints<<std::endl;
}


std::string ClapTrap::getName () const { return _Name; }
int ClapTrap::getHitPoints () const {
    std::cout<<"ClapTrap: "<<_Name<<" tem "<<_HitPoints<<" de vida"<<std::endl;    
    return _HitPoints;
}
int ClapTrap::getEnergyPoints () const {
    std::cout<<"ClapTrap: "<<_Name<<" tem "<<_EnergyPoints<<" pontos de energia"<<std::endl;    
    return _EnergyPoints;
}
int ClapTrap::getAttackDamage () const { return _AttackDamage; }

void ClapTrap::setName ( std::string name )
{
    this->_Name = name;
}
void ClapTrap::setHitPoints ( int amount )
{
    this->_HitPoints = amount;
    std::cout<<"ClapTrap: "<<_Name<<" redefiniu HitPoints: "<<amount<<std::endl;
}
void ClapTrap::setEnergyPoints ( int amount )
{
    this->_EnergyPoints = amount;
    std::cout<<"ClapTrap: "<<_Name<<" redefiniu EnergyPoints: "<<amount<<std::endl;
}
void ClapTrap::setAttackDamage ( int amount )
{
    this->_AttackDamage = amount;
}


