#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("")
{
    std::cout << "Default FragTrap Constructor" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "String FragTrap Constructor" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy)
{
    std::cout << "Copy FragTrap Constructor" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const &rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is ready to give HighFives !!!" << std::endl;
}