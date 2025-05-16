#include "WrongCat.hpp"

WrongCat::WrongCat ()
{    
    this->_type = "gato";
    std::cout<<"[WrongCat] construtor chamado"<<std::endl;
}

WrongCat::WrongCat (const WrongCat& other) : WrongAnimal (other)
{    
    std::cout<<"[WrongCat] construtor de cópia chamado"<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout<<"[Animal] operador de atribuição chamado"<<std::endl;
    if (this == &other)
        return *this;
    this->_type = other.getType();
    return *this;
}
WrongCat::~WrongCat ()
{
    std::cout<<"[WrongCat] destrutor chamado"<<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<<"Eu sou um "<<_type<<" miaaaaaaau!"<<std::endl;
}