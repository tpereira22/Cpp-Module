/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:39:42 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:39:43 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string typeName)
{
    this->setType(typeName);
}

Weapon::~Weapon(void)
{

}

std::string const   &Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string newType)
{
    this->_type = newType;
}
