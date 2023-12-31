/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:49:59 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:50:00 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat Default Constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
    std::cout << "WrongCat copy Constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat    &WrongCat::operator=(WrongCat const &rhs)
{
    this->type = rhs.type;
    return *this;
}

void        WrongCat::makeSound(void) const
{
    std::cout << "Wrong Cat Noise" << std::endl;
}

std::string WrongCat::getType(void) const
{
    return this->type;
}
