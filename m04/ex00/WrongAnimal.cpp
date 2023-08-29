/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:49:23 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:49:24 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default Constructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "WrongAnimal copy Constructor" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    return *this;
}

void        WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Noises" << std::endl;
}

std::string WrongAnimal::getType(void) const 
{
    return this->type;
}
