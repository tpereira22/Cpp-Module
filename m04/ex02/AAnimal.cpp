/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:59:43 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:59:45 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("No type")
{
    std::cout << "Animal Default Constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal Destructor" << std::endl;
}

AAnimal  &AAnimal::operator=(AAnimal const &rhs)
{
    this->type = rhs.type;
    return *this;
}

std::string AAnimal::getType(void) const
{
    return this->type;
}
