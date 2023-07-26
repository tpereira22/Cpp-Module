/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:14:25 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:14:26 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <iostream>

class   ClapTrap
{
private:
protected:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &copy);
    ~ClapTrap(void);

    ClapTrap    &operator=(ClapTrap const &rhs);

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif
