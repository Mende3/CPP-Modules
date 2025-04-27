#include "Harl.hpp"


//private functions

void Harl::debug  ( void )
{
    std::cout << "\033[1;36m'DEBUG' level: Debug messages contain contextual information. They are mostlyused for problem diagnosis.\033[0m" <<std::endl;
}

void Harl::info ( void )
{
    std::cout << "\033[1;36m'INFO' level: These messages contain extensive information. They are helpful fortracing program execution in a production environment.\033[0m" <<std::endl;
}

void Harl::warning (void)
{
    std::cout << "\033[1;36m'WARNING' level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored.\033[0m" <<std::endl;
}

void Harl::error ( void )
{
    std::cout << "\033[1;36m'ERROR' level: These messages indicate that an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention.\033[0m" <<std::endl;
}
//end 

//constructor
Harl::Harl( )
{
}
//destructor
Harl::~Harl()
{
}

//public functoin
void Harl::complain ( std::string level )
{
    std::string levels [] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    void (Harl::*functions[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    size_t i = 0;
    for (; i < 4; i++)
    {
        if (i == 3 && level != levels[i])
        {
            i--;
            break;
        }
        if (level == levels[i])
            break;
    }
    switch (i)
    {
        default:
            std::cout << "complain com uma falha provável\n";
            break;
        case 0:
            (this->*functions[0])();
            // fall through
        case 1:
            (this->*functions[1])();
            // fall through
        case 2:
            (this->*functions[2])();
            // fall through
        case 3:
            (this->*functions[3])();
            break;
    }   
}
//end