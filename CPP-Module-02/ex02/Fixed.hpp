#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits;
    
    public:

        //constructors
        Fixed ();
        Fixed (const Fixed& other);
        Fixed ( const int intValue );
        Fixed ( const float floatValue );

        //sobrecargas de operadores
        Fixed& operator=(const Fixed& other);
        //sobrecargas de comparacao
        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);
        //sobrecargas de comparacao
        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);
        //sobrecargas de pré e pós decremento
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        //destrucotrs
        ~Fixed ();


        //sobrecargas de funcoes
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);

        //others methods
        float toFloat( void ) const;
        int toInt( void ) const;

        //getters
        int getRawBits (void) const;

        //setters
        void setRawBits (const int raw);
};


std::ostream& operator<<(std::ostream& out, const Fixed& ref);

#endif
