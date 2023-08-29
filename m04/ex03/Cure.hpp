/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:03:10 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:03:11 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(Cure const &copy);
    ~Cure(void);

    Cure    &operator=(Cure const &rhs);

    AMateria    *clone() const;
    void        use(ICharacter &target);
};

#endif
