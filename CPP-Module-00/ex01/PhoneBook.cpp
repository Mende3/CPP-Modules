/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:15:19 by mefranci          #+#    #+#             */
/*   Updated: 2025/04/11 08:15:20 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

const int PhoneBook::maxSize = 8;

PhoneBook::PhoneBook() : contactCount(0), index(0) {}

void PhoneBook::addContact(std::string num, std::string firstName, std::string lastName, std::string nickName, std::string darkSecret)
{    
    if (index == 8)
        index = 0;
    contacts[index].setContact (index, num, firstName, lastName, nickName, darkSecret);
    index++;
    if (contactCount < maxSize)
        contactCount++;
}

std::string truncate(const std::string& str, size_t width)
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

void PhoneBook::showTable(int i)
{
    std::cout << "|" << std::setw(10) << std::right << contacts[i].getId()       << "|"
              << std::setw(10) << std::right << truncate(contacts[i].getFirstName(), 10) << "|"
              << std::setw(10) << std::right << truncate(contacts[i].getLastName(), 10)  << "|"
              << std::setw(10) << std::right << truncate(contacts[i].getNickName(), 10)  << "|" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void PhoneBook::searchContact(int idx)
{
    if (idx == contacts[idx].getId() && contactCount != 0)
    {
        showInfoContact (idx);
    }
    else
    {
        std::cout << "\033[31m\nÍndice vazio!\n\033[0m" << std::endl;
    }
}

void PhoneBook::ShowAll ()
{
    int i = 0;

    std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|  index   | firstname| lastname | nickname |" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    if (contactCount == 0)
    {
        std::cout << "+----------+----------+----------+----------+" << std::endl;
        std::cout << "|          Sem contactos no momento         |" << std::endl;
        std::cout << "+----------+----------+----------+----------+" << std::endl;
    }
    else
    {
        while (i < contactCount && i < maxSize)
        {
            showTable (i);
            i++;
        }
    }
}

void PhoneBook::showInfoContact (int idx)
{
    std::cout << "\n";
    std::cout << "\033[32mÍndice: " << contacts[idx].getId() << "\033[0m" << std::endl;
    std::cout << "\033[32mFirst Name: " << contacts[idx].getFirstName() << "\033[0m" << std::endl;
    std::cout << "\033[32mLast Name: " << contacts[idx].getLastName() << "\033[0m" << std::endl;
    std::cout << "\033[32mNick Name: " << contacts[idx].getNickName() << "\033[0m" << std::endl;
    std::cout << "\033[32mNumber: " << contacts[idx].getNumber() << "\033[0m" << std::endl;
    std::cout << "\033[32mDark Secret: " << contacts[idx].getDarkSecret() << "\033[0m" << std::endl;
    std::cout << "\n";
}
