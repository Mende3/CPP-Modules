#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits = 8;

// contrutores 
Fixed::Fixed () : _value(0) 
{
    std::cout << "Default constructor called"<<std::endl;
}

Fixed::Fixed (const Fixed& other) : _value (other._value)
{
    std::cout << "Copy constructor called"<<std::endl;
}

Fixed::Fixed (const int intValue)
{
    std::cout << "Int constructor called"<<std::endl;
    _value = intValue << _fractionalBits;
}

Fixed::Fixed (const float floatValue)
{
    std::cout << "Float constructor called"<<std::endl;
    _value = roundf(floatValue * (1 << _fractionalBits));
}
//-----------------------------------------------

// destrutores
Fixed::~Fixed () {std::cout<<"Destructor called"<<std::endl;}
//-----------------------------------------------


//others functions
int Fixed::toInt( void ) const {return (_value >> _fractionalBits);}
float Fixed::toFloat( void ) const {return (static_cast<float>(_value) / (1 << _fractionalBits));}
//-----------------------------------------------

// sobrecargas
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called"<<std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return *this;
}
//-----------------------------------------------

// getters e setters
int Fixed::getRawBits (void) const
{
    std::cout << "getRawBits member function called"<<std::endl;
    return this->_value;
}

void Fixed::setRawBits (const int raw)
{
    this->_value = raw;
}
//-----------------------------------------------


// fora da class
std::ostream& operator<<(std::ostream& out, const Fixed& ref)
{
    out << ref.toFloat();
    return out;
}
//-----------------------------------------------