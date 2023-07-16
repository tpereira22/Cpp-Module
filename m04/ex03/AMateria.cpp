#include "AMateria.hpp"
#include "Ice.hpp"


AMateria::AMateria(void) : _type("")
{
    std::cout << "Abstract Materia default Constr" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "Abstract Materia string Constr" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
    std::cout << "Abstract Materia copy Constr" << std::endl;
    *this = copy;
}

AMateria::~AMateria(void)
{
    std::cout << "Abstract Materia destr" << std::endl;
}

AMateria    &AMateria::operator=(AMateria const &copy)
{
    std::cout << "Abstract Materia Assignment" << std::endl;
    this->_type = copy._type;
    return *this;
}

std::string const   &AMateria::getType() const
{
    return this->_type;
}

void        AMateria::use(ICharacter &target)
{
    std::cout << "AMateria use" << std::endl; //this should never be printed
}