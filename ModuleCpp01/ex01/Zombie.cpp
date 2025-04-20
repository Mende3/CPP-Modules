#include "Zombie.hpp"

Zombie::Zombie () : _name("") {}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << " destruido"<<std::endl;
}

void Zombie::announce ()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::setName (std::string name)
{
    this->_name = name;
}