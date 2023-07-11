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
    Zombie  *zombietest;

    zombietest = zombieHorde(4, "Horde 1");
    zombietest[0].announce();
    zombietest[3].announce();
    zombietest[5].announce();
    delete [] zombietest;
    
    zombietest = zombieHorde(2, "Horde 2");
    zombietest[0].announce();
    zombietest[3].announce();
    delete [] zombietest;

}
