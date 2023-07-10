#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &copy);
    ~DiamondTrap(void);


    DiamondTrap &operator=(DiamondTrap const &rhs);
    
    void        attack(const std::string &target);
    void        whoAmI(void);
};
#endif