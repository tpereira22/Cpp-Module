/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:46:58 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:47:00 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Default Constructor" << std::endl;
    this->type = "No type";
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = copy;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor" << std::endl;
}

Animal  &Animal::operator=(Animal const &rhs)
{
    this->type = rhs.type;
    return *this;
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal Noises" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}
