/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:32:55 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:32:57 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name );

int main(void)
{
    Zombie  *zombietest1;

    zombietest1 = zombieHorde(4, "Horde 1");
    zombietest1[0].announce();
    zombietest1[3].announce();
    std::cout << std::endl;

    Zombie  *zombietest2;

    zombietest2 = zombieHorde(2, "Horde 2");
    zombietest2[0].announce();
    zombietest2[1].announce();
    std::cout << std::endl;
    delete [] zombietest1;
    delete [] zombietest2;

}
