#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
   std::cout << "ClapTrap Default Constructor Called" << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap String Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
    *this = copy;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap Assignment Operator Called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0)
    {
        if (this->_energyPoints <= 0)
            std::cout << "No energy left !" << std::endl;
        else
        {
            this->_energyPoints--;
            std::cout << "ClapTrap " << this->_name << " attacks " << target;
            std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
            std::cout << "-1 Energy Point ! Total: " << this->_energyPoints;
            std::cout << " energy points" << std::endl;
        }
    }
    else
        std::cout << this->_name << " is dead !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " was damaged by ";
        std::cout << amount << " hit points!" << std::endl;
        std::cout << "Hit points went from " << this->_hitPoints;
        if ((this->_hitPoints - amount) < 0)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= amount;
        std::cout << " to " << this->_hitPoints << std::endl;
        if (this->_hitPoints == 0)
            std::cout << this->_name << " is dead !" << std::endl;
    }
    else
        std::cout << this->_name << " is dead !" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        if (this->_energyPoints <= 0)
            std::cout << "No energy left !" << std::endl;
        else
        {
            this->_hitPoints += amount;
            this->_energyPoints--;
            std::cout << "ClapTrap " << this->_name << " was repaired ! Now has ";
            std::cout << this->_hitPoints << " hit points left" << std::endl;
            std::cout << "-1 Energy Point ! Total: " << this->_energyPoints;
            std::cout << " energy points" << std::endl;
        }
    }
    else
        std::cout << this->_name << " is dead !" << std::endl;
}