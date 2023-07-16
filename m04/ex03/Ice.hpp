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