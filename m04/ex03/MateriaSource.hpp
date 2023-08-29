/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:04:32 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:04:34 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria    *_materias[4];
public:
    MateriaSource(void);
    MateriaSource(MateriaSource const &copy);
    ~MateriaSource(void);

    MateriaSource   &operator=(MateriaSource const &rhs);

    void        learnMateria(AMateria *materia);
    AMateria    *createMateria(std::string const &type);
};
#endif
