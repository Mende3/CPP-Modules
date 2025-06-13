#include "Zombie.hpp"

int prime_isdigit (std::string str)
{
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

int main ()
{
    int nbr;
    std::string input;

    std::cout << "Insira o número de Zombies que deseja na horda: ";
    std::getline (std::cin, input);
    if (!prime_isdigit (input))
    {
        std::cout <<"apenas números são aceites"<<std::endl;
        return 0;
    }
    std::istringstream iss(input);
    iss >> nbr;
    if (nbr <= 0)
    {
        std::cout <<"o argumento deve ser maior que 0"<<std::endl;
        return 0;
    }            
    Zombie *horde = zombieHorde (nbr, "Mendes");
    for (int i = 0; i < nbr; i++)
        horde[i].announce ();
    delete[] horde;
    return 1;
}
