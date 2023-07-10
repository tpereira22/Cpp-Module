#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}
Cat::Cat(Cat const &copy)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    *this = copy;
}
Cat::~Cat(void)
{
    std::cout << "Cat Destructor" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
    this->type = rhs.type;
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