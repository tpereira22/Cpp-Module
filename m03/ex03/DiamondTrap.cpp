/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:17:38 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:17:40 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("d_clap_trap")
{
    std::cout << "Defaut Diamond Constructor" << std::endl;
    this->_name = "d_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::getEnergyPoints();
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "String Diamond Constructor" << std::endl;
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::getEnergyPoints();
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
    : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "Copy Diamond Constructor" << std::endl;
    *this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Diamond Destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) 
{
    std::cout << "Assignment Diamond Operator" << std::endl;
    this->_name = rhs._name + "_clap_trap";
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "Normal name -> " << this->_name << std::endl;
    std::cout << "ClapTrap name -> " << ClapTrap::_name << std::endl;
}
