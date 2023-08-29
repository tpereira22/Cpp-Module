/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:14:57 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:14:58 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &copy);
    ~ScavTrap(void);

    ScavTrap    &operator=(ScavTrap const &rhs);

    void        attack(const std::string &target);
    void        guardGate(void);
};

#endif
