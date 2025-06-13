#include "inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal ()
{
    std::cout<<"[WrongAnimal] construtor chamado"<<std::endl;
    this->_type = "";
}
WrongAnimal::WrongAnimal (const WrongAnimal &other)
{
    std::cout<<"[WrongAnimal] construtor chamado"<<std::endl;
    *this = other;    
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout<<"[WrongAnimal] operador de atribuição chamado"<<std::endl;
    if (this == &other)
        return *this;
    this->_type = other.getType();
    return *this;
}
WrongAnimal::~WrongAnimal ()
{
    std::cout<<"[WrongAnimal] destructor chamado"<<std::endl;
}

void WrongAnimal::makeSound () const
{
    std::cout<<"WrongAnimal no make sound" <<std::endl;
}

std::string WrongAnimal::getType () const
{
    return this->_type;
}