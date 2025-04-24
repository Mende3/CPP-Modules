#include <iostream>
#include "Harl.hpp"

int main ()
{
    Harl harl;
    
    harl.complain("DEBUG");
    std::cout << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    harl.complain("ERROR");


    std::cout << std::endl;
    size_t i = 0;
    size_t limit = 6;
    for (; i < 6; i++)
    {
        std::cout << "Agora você tem " << limit-- << " chances de fazer harl2.0 dizer alguma coisa." <<std::endl;
        std::string input;
        std::cout << ">> ";
        getline (std::cin, input);
        if (std::cin.eof() == true)
        {
            exit (EXIT_FAILURE);
        }
        harl.complain(input);
        std::cout << std::endl;
    }
}