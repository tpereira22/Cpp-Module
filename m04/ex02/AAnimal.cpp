#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "Animal Default Constructor" << std::endl;
    this->type = "No type";
}

AAnimal::AAnimal(AAnimal const &copy)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal Destructor" << std::endl;
}

AAnimal  &AAnimal::operator=(AAnimal const &rhs)
{
    this->type = rhs.type;
    return *this;
}

std::string AAnimal::getType(void) const
{
    return this->type;
}