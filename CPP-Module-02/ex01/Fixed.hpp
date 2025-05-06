#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits;
    
    public:
        Fixed ();
        Fixed (const Fixed& other);
        Fixed ( const int intValue );
        Fixed ( const float floatValue );
        Fixed& operator=(const Fixed& other);
        ~Fixed ();

        //others functions
        float toFloat( void ) const;
        int toInt( void ) const;

        //getters
        int getRawBits (void) const;

        //setters
        void setRawBits (const int raw);
};


std::ostream& operator<<(std::ostream& out, const Fixed& ref);

#endif
