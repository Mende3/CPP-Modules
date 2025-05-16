#include "Cat.hpp"

Cat::Cat ()
{    
    this->_type = "gato";
    std::cout<<"[Cat] construtor chamado"<<std::endl;
}

Cat::Cat (const Cat& other) : Animal (other)
{    
    std::cout<<"[Cat] construtor de cópia chamado"<<std::endl;
    this->_type = other.getType();
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout<<"[Animal] operador de atribuição chamado"<<std::endl;
    if (this == &other)
        return *this;
    this->_type = other.getType();
    return *this;
}
Cat::~Cat ()
{
    std::cout<<"[Cat] destrutor chamado"<<std::endl;
}

void Cat::makeSound() const
{
    std::cout<<"Eu sou um "<<_type<<" miaaaaaaau!"<<std::endl;
}