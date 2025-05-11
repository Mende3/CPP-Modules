/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:15:27 by mefranci          #+#    #+#             */
/*   Updated: 2025/04/11 08:15:28 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook
{
    private:
        static const int maxSize;
        int contactCount;
        int index;
        Contact contacts[8];

    public:
        PhoneBook();

        void ShowAll ();
        void showTable (int i);
        void searchContact (int idx);
        void showInfoContact (int idx);
        void addContact(std::string num, std::string firstName, std::string lastName, std::string nickName, std::string darkSecret);
};

#endif
