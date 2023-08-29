/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:15:53 by timartin          #+#    #+#             */
/*   Updated: 2023/07/26 17:15:55 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &copy);
    ~FragTrap(void);

    FragTrap    &operator=(FragTrap const &rhs);
    
    void    highFivesGuys(void);
};

#endif
