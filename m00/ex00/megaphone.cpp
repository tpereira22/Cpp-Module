/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:06:56 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 16:07:00 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (av && av[i])
		{
			j = 0;
			while (av[i] && av[i][j])
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
			i++;

		}    
		std::cout << std::endl;
	}
}
