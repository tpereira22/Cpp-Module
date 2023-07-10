#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default Constructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "WrongAnimal copy Constructor" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    return *this;
}

void        WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Noises" << std::endl;
}

std::string WrongAnimal::getType(void) const 
{
    return this->type;
}