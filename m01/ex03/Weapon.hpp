/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:39:50 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:39:51 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string typeName);
    ~Weapon(void);

    std::string const   &getType(void);
    void                setType(std::string newType);
};


#endif
