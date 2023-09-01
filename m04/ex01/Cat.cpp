/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:58:28 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:58:29 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(Cat const &copy)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    this->type = copy.type;
    this->_brain = new Brain(*(copy._brain));
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat Destructor" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat Assigned" << std::endl;
    if (this->_brain)
        delete this->_brain;
    this->type = rhs.type;
    this->_brain = new Brain(*(rhs._brain));
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow Meow !" << std::endl;
}

std::string Cat::getType(void) const
{
    return this->type;
}

Brain       *Cat::getBrain(void) const
{
    return this->_brain;
}

void    Cat::printIdea(void) const
{
    std::string *ideas = this->_brain->getIdeas();
    std::cout << "Cat " << ideas[0] << std::endl;
}
