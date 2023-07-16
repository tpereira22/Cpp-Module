#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure Constr" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{

}

Cure::~Cure(void)
{
    std::cout << "Cure Destr" << std::endl;
}

Cure    &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

AMateria    *Cure::clone() const
{
    return (new Cure(*this));
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}