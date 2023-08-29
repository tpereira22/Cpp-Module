/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:03:01 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:03:02 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &copy) : AMateria(copy) {}

Cure::~Cure(void) {}

Cure    &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

AMateria    *Cure::clone() const
{
    return (new Cure(*this));
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
