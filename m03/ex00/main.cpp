/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:13:38 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:13:39 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    {
        std::cout << "---> TEST ENERGY LEFT <---" << std::endl;
        ClapTrap    trap1("Trap1");
        for (int i = 0; i <= 10; i++)
            trap1.attack("Ze");
        trap1.beRepaired(4);
    }
    {
        std::cout << std::endl;
        std::cout << "---> TEST HEALTH AND REPAIR <---" << std::endl;
        ClapTrap    trap1("Trap2");
        ClapTrap    trap2(trap1);
        trap2.takeDamage(2);
        trap2.takeDamage(3);
        trap2.beRepaired(4);
        trap2.takeDamage(2);
        trap2.takeDamage(3);
        trap2.takeDamage(5);
        trap2.takeDamage(5);
        trap2.beRepaired(4);
        trap2.attack("Ze");
        ClapTrap    trap3 = trap2;
        trap3.takeDamage(5);
    }
}
