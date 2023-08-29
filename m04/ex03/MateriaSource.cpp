/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:04:27 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:04:28 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materias{ nullptr } {}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    *this = copy;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != nullptr)
            delete this->_materias[i];
    }
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (rhs._materias[i] != nullptr)
        {
            if (this->_materias[i] != nullptr)
                delete _materias[i];
            this->_materias[i] = rhs._materias[i]->clone();
        }
        else
            this->_materias[i] = nullptr;
    }
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
    std::cout << materia->getType() << " was deleted !" << std::endl;
    delete materia;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != nullptr && this->_materias[i]->getType() == type)
        {
            std::cout << "Materia " << type;
            std::cout << " was created!" << std::endl;
            return this->_materias[i]->clone();
        }
    }
    std::cout << "Materia type doesn't exist! Can't create " << type << std::endl;
    return nullptr;
}
