/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:15:08 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:15:09 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("")
{
    std::cout << "Default ScavTrap Constructor" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "String ScavTrap Constructor" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    std::cout << "Copy ScavTrap Constructor" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap Assignment Operator" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0)
    {
        if (this->_energyPoints <= 0)
            std::cout << "No energy left !" << std::endl;
        else
        {
            this->_energyPoints--;
            std::cout << "ScavTrap " << this->_name << " attacks " << target;
            std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
            std::cout << "-1 Energy Point ! Total: " << this->_energyPoints;
            std::cout << " energy points" << std::endl;
        }
    }
    else
        std::cout << this->_name << " is dead !" << std::endl;
}
void    ScavTrap::guardGate(void)
{
    if (this->_hitPoints > 0)
        std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode !" << std::endl;
    else
        std::cout << this->_name << " is dead !" << std::endl;
}
