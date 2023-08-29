/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:48:14 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:48:15 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->type = rhs.type;
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "Bark Bark !" << std::endl;
}

std::string Dog::getType(void) const
{
    return this->type;
}
