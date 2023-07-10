#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->type = rhs.type;
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