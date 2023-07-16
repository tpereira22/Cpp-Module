#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materias{ nullptr }
{
    std::cout << "MateriaSource default constr" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    std::cout << "MateriaSource copy constr" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != nullptr)
            delete this->_materias[i];
    }
    std::cout << "MateriaSource destr" << std::endl;
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &rhs)
{
    return *this;
}

void        MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == nullptr)
        {
            this->_materias[i] = materia;
            std::cout << "Materia " << materia->getType();
            std::cout << " was learned!" << std::endl;
            return ;
        }
    }
    std::cout << "MateriaSource Inventory is Full! Can't learn new Materia!" << std::endl;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i]->getType() == type)
        {
            std::cout << "Materia " << type;
            std::cout << " was created!" << std::endl;
            return this->_materias[i]->clone();
        }
    }
    std::cout << "Materia type doesn't exist! Can't create " << type << std::endl;
    return nullptr;
}
