/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:14:49 by mefranci          #+#    #+#             */
/*   Updated: 2025/04/11 08:14:51 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
        int id;
        std::string nbr;
        std::string Fname;
        std::string Lname;
        std::string Nname;
        std::string Dsecret;

    public:
    
    Contact();
    Contact(int idx, std::string num, std::string firstName, std::string lastName, 
            std::string nickName, std::string darkSecret);

    int getId() const;
    std::string getNumber() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getFirstName() const;
    std::string getDarkSecret() const;

    void setContact (int idx, std::string num, std::string firstName, std::string lastName, std::string nickName, std::string darkSecret);
};

#endif
