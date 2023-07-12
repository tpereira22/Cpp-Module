#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor" << std::endl;
    delete this->brain;
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

void Dog::printIdea(void) const
{
    int random = rand()%100;
    
    std::string *ideas = this->brain->getIdeas();
    std::cout << ideas[random] << std::endl;
}