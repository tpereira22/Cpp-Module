/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:01:55 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:01:57 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"


AMateria::AMateria(void) : _type("") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria::~AMateria(void) {}

AMateria    &AMateria::operator=(AMateria const &copy)
{
    this->_type = copy._type;
    return *this;
}

std::string const   &AMateria::getType() const
{
    return this->_type;
}

void        AMateria::use(ICharacter &target)
{
    std::cout << "AMateria use" << std::endl; //this should never be printed
}
