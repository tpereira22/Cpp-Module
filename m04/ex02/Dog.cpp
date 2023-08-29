/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:00:54 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:00:55 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    this->type = copy.type;
    this->_brain = new Brain(*(copy._brain));
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog Destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog Assigned" << std::endl;
    if (this->_brain)
        delete this->_brain;
    this->type = rhs.type;
    this->_brain = new Brain(*(rhs._brain));
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "Bark Bark !" << std::endl;
}

std::string Dog::getType(void) const
{
    return this->type;
}

Brain       *Dog::getBrain(void) const
{
    return this->_brain;
}

void Dog::printRandomIdea(void) const
{
    int random = rand()%100;
    
    std::string *ideas = this->_brain->getIdeas();
    std::cout << ideas[random] << std::endl;
}
