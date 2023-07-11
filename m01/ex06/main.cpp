/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:43:15 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:43:16 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;
    
    if (ac == 2)
        harl.complain(av[1]);
    else
        std::cout << "Usage: ./harlFilter 'MESSAGE'" << std::endl;
}
