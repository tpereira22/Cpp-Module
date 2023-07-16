#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class   AMateria
{
protected:
    std::string _type;
public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(AMateria const &copy);
    virtual ~AMateria(void);

    AMateria    &operator=(AMateria const &copy);
    std::string const   &getType() const;

    virtual AMateria    *clone() const = 0;
    virtual void        use(ICharacter &target);
};

#endif
