#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private :
        std::string _Name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;

    public :
        ClapTrap ();
        ClapTrap (std::string name);
        // sobrecarga
        ClapTrap& operator=(const ClapTrap& copy);
        ~ClapTrap ();


        // metodos membros
        void attack (const std::string& target);
        void takeDamage (unsigned int amount);
        void beRepaired (unsigned int amount);

        //getters e setters
        std::string getName () const;
        int getHitPoints () const;
        int getEnergyPoints () const;
        int getAttackDamage () const;

        void setName ( std::string name );
        void setHitPoints ( int amount );
        void setEnergyPoints ( int amount );
        void setAttackDamage ( int amount );
};


#endif