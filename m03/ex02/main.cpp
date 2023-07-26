/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:16:01 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:16:06 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    clapTrap("clapTrap");
    ScavTrap    scavTrap("scavTrap");
    FragTrap    fragTrap("fragTrap");

    std::cout << std::endl;
    
    clapTrap.attack("Ze");
    scavTrap.attack("Ze");
    fragTrap.attack("Ze");
    std::cout << std::endl;
    
    clapTrap.takeDamage(5);
    scavTrap.takeDamage(5);
    fragTrap.takeDamage(5);
    std::cout << std::endl;
    
    clapTrap.beRepaired(2);
    scavTrap.beRepaired(2);
    fragTrap.beRepaired(2);
    std::cout << std::endl;
    
    scavTrap.guardGate();
    fragTrap.highFivesGuys();
    std::cout << std::endl;
    
}
