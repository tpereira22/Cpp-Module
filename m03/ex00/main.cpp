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
    ClapTrap    trap1("Trap1");

    trap1.attack("Ze");
    trap1.attack("Joao");
    trap1.attack("Joao");
    trap1.beRepaired(4);
    trap1.beRepaired(4);
    trap1.takeDamage(2);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.beRepaired(4);
    trap1.attack("Joao");
    trap1.beRepaired(4);
}
