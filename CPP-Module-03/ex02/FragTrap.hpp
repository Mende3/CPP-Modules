/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:52:22 by mefranci          #+#    #+#             */
/*   Updated: 2025/05/21 11:52:23 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    public :
        FragTrap ();
        FragTrap (std::string name);
        FragTrap (const FragTrap &other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap ();
        
        void highFivesGuys( void );
} ;

#endif
