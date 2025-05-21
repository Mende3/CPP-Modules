/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:47:59 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:48:00 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private :
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public :
        ClapTrap ( );
        ClapTrap (std::string name);
        ClapTrap (const ClapTrap& other);
        // sobrecarga
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap ();


        // metodos membros
        void attack (const std::string& target);
        void takeDamage (unsigned int amount);
        void beRepaired (unsigned int amount);
};


#endif
