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