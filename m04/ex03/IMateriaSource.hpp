/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:03:55 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:03:56 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_H
# define IMATERIA_SOURCE_H

# include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource(void) {};
    virtual void        learnMateria(AMateria *materia) = 0;
    virtual AMateria    *createMateria(std::string const &type) = 0;
};

#endif
