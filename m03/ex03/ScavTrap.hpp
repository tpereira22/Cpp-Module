#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
private:
    int _enrg;
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &copy);
    ~ScavTrap(void);

    ScavTrap        &operator=(ScavTrap const &rhs);

    virtual void    attack(const std::string &target);
    void            guardGate(void);

    int             getEnergyPoints(void);
};

#endif