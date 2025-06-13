#include "inc/Dog.hpp"

Dog::Dog () : Animal ()
{
    this->_type = "Dog";
    this->ideas = new Brain();
    std::cout<<"[Dog] construtor chamado"<<std::endl;
}

Dog::Dog (const Dog& other) : Animal (other)
{
    std::cout<<"[Dog] construtor de cópia chamado"<<std::endl;
    this->_type = other.getType();
}

Dog& Dog::operator=(const Dog& other)
{    
    std::cout<<"[Dog] operador de atribuição chamado"<<std::endl;
    if (this == &other)
        return *this;
    this->_type = getType();
    return *this;
}

Dog::~Dog()
{
    ideas->getIdea(_type);
    delete ideas;
    std::cout<<"[Dog] destrutor chamado"<<std::endl;
}

void Dog::makeSound () const
{
    std::cout<<"Eu sou um "<<_type<<" rufff!"<<std::endl;
}
Brain Dog::getIdea () const
{
    return *ideas;
}