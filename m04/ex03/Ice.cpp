#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice Constr" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
    
}

Ice::~Ice(void)
{
    std::cout << "Ice Destr" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
    std::cout << "Ice Assign" << std::endl;

    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

AMateria    *Ice::clone(void) const
{
    return (new Ice(*this));
}

void        Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}