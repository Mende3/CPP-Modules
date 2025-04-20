#include <iostream>

int main ()
{
    std::string frase;
    std::string *frasePTR;
    std::string &fraseREF = frase;

    frase = "HI THIS IS BRAIN";
    frasePTR = &frase;

    std::cout << &frase << std::endl;
    std::cout << frasePTR << std::endl;
    std::cout << &fraseREF << std::endl;

    std::cout << frase << std::endl;
    std::cout << *frasePTR << std::endl;
    std::cout << fraseREF << std::endl;
}