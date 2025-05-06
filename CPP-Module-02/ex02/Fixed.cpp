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

//destrutores
Fixed::~Fixed () {std::cout<<"Destructor called"<<std::endl;}
//-----------------------------------------------


//others methods
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

bool Fixed::operator>(const Fixed& other){ return this->toFloat() > other.toFloat(); }
bool Fixed::operator<(const Fixed& other){ return this->toFloat() < other.toFloat(); }
bool Fixed::operator>=(const Fixed& other){ return this->toFloat() >= other.toFloat(); }
bool Fixed::operator<=(const Fixed& other){ return this->toFloat() <= other.toFloat(); }
bool Fixed::operator==(const Fixed& other){ return this->toFloat() == other.toFloat(); }
bool Fixed::operator!=(const Fixed& other){ return this->toFloat() != other.toFloat(); }

Fixed Fixed::operator+(const Fixed& other){ return this->toFloat() + other.toFloat(); }
Fixed Fixed::operator-(const Fixed& other){ return this->toFloat() - other.toFloat(); }
Fixed Fixed::operator*(const Fixed& other){ return this->toFloat() * other.toFloat(); }
Fixed Fixed::operator/(const Fixed& other){ return this->toFloat() / other.toFloat(); }
Fixed& Fixed::operator++()
{
    ++_value;
    return *this;
}
Fixed  Fixed::operator++(int)
{
    Fixed temp(*this);
    ++_value;
    return temp;
}
Fixed& Fixed::operator--()
{
    --_value;
    return *this;
}
Fixed  Fixed::operator--(int)
{
    Fixed temp(*this);
    --_value;
    return temp;
}
//-----------------------------------------------

//sobrecargas de funcoes
Fixed& Fixed::min (Fixed& a, Fixed& b)  {return (a._value < b._value) ? a : b;}
const Fixed& Fixed::min (const Fixed& a, const Fixed& b)  {return (a._value < b._value) ? a : b;}
Fixed& Fixed::max (Fixed& a, Fixed& b)  {return (a._value > b._value) ? a : b;}
const Fixed& Fixed::max (const Fixed& a, const Fixed& b)  {return (a._value > b._value) ? a : b;}

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