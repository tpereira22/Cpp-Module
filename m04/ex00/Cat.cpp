/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:47:39 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:47:40 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";
}
Cat::Cat(Cat const &copy)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    *this = copy;
}
Cat::~Cat(void)
{
    std::cout << "Cat Destructor" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    this->type = rhs.type;
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow Meow !" << std::endl;
}

std::string Cat::getType(void) const
{
    return this->type;
}
