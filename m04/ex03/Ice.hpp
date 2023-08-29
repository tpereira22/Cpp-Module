/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:03:30 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:03:32 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice(void);
    Ice(Ice const &copy);
    ~Ice(void);

    Ice &operator=(Ice const &rhs);

    AMateria    *clone(void) const;
    void        use(ICharacter &target);
};

#endif
