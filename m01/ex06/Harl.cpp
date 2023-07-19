/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:42:24 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:42:26 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void    Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<  std::endl;
}

void    Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
	int	i;

	void    (Harl::*ptr)();
	std::string levelStr[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (i = 0; i < 4; i++)
	{
		if (levelStr[i].compare(level) == 0)
			break ;
	}
	switch (i)
	{
		case 0:
			ptr = &Harl::debug;
			(this->*ptr)();
		case 1:
			ptr = &Harl::info;
			(this->*ptr)();
		case 2:
			ptr = &Harl::warning;
			(this->*ptr)();
		case 3:
			ptr = &Harl::error;
			(this->*ptr)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
