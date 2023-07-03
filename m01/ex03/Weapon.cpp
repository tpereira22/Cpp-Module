#include "Weapon.hpp"

Weapon::Weapon(std::string typeName)
{
    this->setType(typeName);
}

Weapon::~Weapon(void)
{

}

const   std::string Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string newType)
{
    this->_type = newType;
}