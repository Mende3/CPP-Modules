/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:55:19 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:55:22 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string _name;

    public :
        DiamondTrap (std::string name);
        DiamondTrap (const DiamondTrap &other);
        DiamondTrap& operator=(DiamondTrap &other);
        ~DiamondTrap ( void );
        void whoIam();
} ;

#endif
