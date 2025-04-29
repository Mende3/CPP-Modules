#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed () : _value(0) 
{
    std::cout << "Default constructor called"<<std::endl;
}

Fixed::Fixed (const Fixed& other)
{
    this->_value = other._value;
    std::cout << "Copy constructor called"<<std::endl;
}

Fixed::~Fixed () {std::cout<<"Destructor called"<<std::endl;}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called"<<std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return *this;
}

int Fixed::getRawBits (void) const
{
    std::cout << "getRawBits member function called"<<std::endl;
    return this->_value;
}

void Fixed::setRawBits (const int raw)
{
    this->_value = raw;
}