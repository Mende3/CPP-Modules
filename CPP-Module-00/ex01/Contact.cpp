/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:07:01 by mefranci          #+#    #+#             */
/*   Updated: 2025/04/11 08:13:06 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : id(0), nbr(""), Fname(""), Lname(""), Nname(""), Dsecret("") {}

Contact::Contact(int idx, std::string num, std::string firstName, std::string lastName, 
                 std::string nickName, std::string darkSecret)
    : id(idx), nbr(num), Fname(firstName), Lname(lastName), Nname(nickName), Dsecret(darkSecret) {}


int Contact::getId() const { return id; }

std::string Contact::getNumber() const { return nbr; }
std::string Contact::getLastName() const { return Lname; }
std::string Contact::getNickName() const { return Nname; }
std::string Contact::getFirstName() const { return Fname; }
std::string Contact::getDarkSecret() const { return Dsecret; }

void Contact::setContact (int idx, std::string num, std::string firstName, std::string lastName, std::string nickName, std::string darkSecret)
{
    this->id = idx;
    this->nbr = num;
    this->Fname = firstName;
    this->Lname = lastName;
    this->Nname = nickName;
    this->Dsecret = darkSecret;
}

