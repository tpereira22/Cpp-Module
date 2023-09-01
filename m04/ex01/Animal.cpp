/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:57:12 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:57:15 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("No type")
{
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(Animal const &copy) : type(copy.type)
{
    std::cout << "Animal Copy Constructor" << std::endl;
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

void Animal::printIdea(void) const {};
