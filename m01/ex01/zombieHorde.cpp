/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:33:40 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:33:42 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie  *zombiehorde = new Zombie[N];

    i = 0;
    while (i < N)
    {
        zombiehorde[i].setName(name);
        i++;
    }
    return (zombiehorde);
}
