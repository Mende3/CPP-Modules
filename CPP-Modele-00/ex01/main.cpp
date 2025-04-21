/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:14:56 by mefranci          #+#    #+#             */
/*   Updated: 2025/04/11 08:14:57 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void ADDaction (PhoneBook &pb);
void SEARCHaction (PhoneBook &pb);

int IsEmpty (std::string subject)
{
	if (subject.length() == 0)
	{
		std::cout << "\033[31m\nOs campos não podem ficar vazios!\n\033[0m" << std::endl;
		return 1;
	}
	return 0;
}

int main()
{
    PhoneBook pb;
    std::string cmd;

    while (true)
    {
        std::cout << "Escolhe uma opção:" << std::endl;
        std::cout << "ADD - para adicionar um contacto" << std::endl;
        std::cout << "SEARCH - Para procurar um contacto" << std::endl;
        std::cout << "EXIT - para fechar o programa" << std::endl;
        std::cout << "> ";
        
        if (!std::getline(std::cin, cmd) || std::cin.eof())
        {
            std::cout << std::endl;
            return 0; // Sai imediatamente do programa se detectar EOF
        }

        std::cout << "\n";
        if (cmd == "ADD")
        {
            ADDaction(pb);
            if (std::cin.eof()) // Verifica novamente se o EOF foi pressionado durante a operação
                return 0;
        }
        else if (cmd == "SEARCH")
        {
            SEARCHaction(pb);
            if (std::cin.eof())
                return 0;
        }
        else if (cmd == "EXIT")
        {
            return 0;
        }
    }
    return 0;
}

void ADDaction(PhoneBook &pb)
{
    std::string nbr, firstName, lastName, nickName, darkSecret;

    std::cout << "Em seguida Preencha os espaços" << std::endl;
    std::cout << "> first name: ";
    if (!std::getline(std::cin, firstName) || std::cin.eof())
        return;
    if (IsEmpty(firstName))
        return;
        
    std::cout << "> last name: ";
    if (!std::getline(std::cin, lastName) || std::cin.eof())
        return;
    if (IsEmpty(lastName))
        return;
        
    std::cout << "> nick name: ";
    if (!std::getline(std::cin, nickName) || std::cin.eof())
        return;
    if (IsEmpty(nickName))
        return;
        
    std::cout << "> number: ";
    if (!std::getline(std::cin, nbr) || std::cin.eof())
        return;
    if (IsEmpty(nbr))
        return;
        
    std::cout << "> dark secret: ";
    if (!std::getline(std::cin, darkSecret) || std::cin.eof())
        return;
    if (IsEmpty(darkSecret))
        return;
        
    pb.addContact(nbr, firstName, lastName, nickName, darkSecret);
    std::cout << "\n";
}

void SEARCHaction(PhoneBook &pb)
{
    std::string input;
    
    pb.ShowAll();
    std::cout << "Encontre um contacto digitando seu índice: ";
    if (!std::getline(std::cin, input) || std::cin.eof())
        return;
        
    if (input.length() == 1 && isdigit(input[0]))
    {
        int idx = input[0] - '0';
        if (idx >= 0 && idx < 8)
        {
            pb.searchContact(idx);
        }
        else
            std::cout << "O ID deve estar no intervalo 0 - 7\n";
    }
    else
        std::cout << "Entrada inválida! Deve ser um número entre 0 e 7.\n";
}