/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:50:48 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:50:49 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap ();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);
        // sobrecarga de atribuicao
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();
        void attack (const std::string& target);
        void guardGate();
};

#endif
