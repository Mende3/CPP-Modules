#include "inc/Animal.hpp"

Animal::Animal ()
{
    std::cout<<"[Animal] construtor chamado"<<std::endl;
    this->_type = "";
}
Animal::Animal (const Animal &other)
{
    std::cout<<"[Animal] construtor chamado"<<std::endl;
    *this = other;    
}
Animal& Animal::operator=(const Animal &other)
{
    std::cout<<"[Animal] operador de atribuição chamado"<<std::endl;
    if (this == &other)
        return *this;
    this->_type = other.getType();
    return *this;
}
Animal::~Animal ()
{
    std::cout<<"[Animal] destructor chamado"<<std::endl;
}

void Animal::makeSound () const
{
    std::cout<<"Animal no make sound" <<std::endl;
}

std::string Animal::getType () const
{
    return this->_type;
}