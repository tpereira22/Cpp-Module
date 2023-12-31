/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:38:38 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:38:39 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA named " << name << " was created.\n";
}

HumanA::~HumanA()
{

}

void    HumanA::attack( void )
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
