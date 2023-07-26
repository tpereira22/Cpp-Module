/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:14:31 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:14:33 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    clapTrap("clapTrap");
    ScavTrap    scavTrap("scavTrap");

    std::cout << std::endl;
    
    clapTrap.attack("Ze");
    scavTrap.attack("Ze");
    std::cout << std::endl;
    
    clapTrap.takeDamage(5);
    scavTrap.takeDamage(5);
    std::cout << std::endl;
    
    clapTrap.beRepaired(2);
    scavTrap.beRepaired(2);
    std::cout << std::endl;
    
    scavTrap.guardGate();
    std::cout << std::endl;
    
}
