#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <iostream>

class   ClapTrap
{
private:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &copy);
    ~ClapTrap(void);

    ClapTrap    &operator=(ClapTrap const &rhs);

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif