/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:38:47 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:38:48 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <iostream>
# include "Weapon.hpp"

class   HumanA
{
private:

	std::string	_name;
	Weapon		&_weapon;

public:

    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void    attack( void );
};

#endif
