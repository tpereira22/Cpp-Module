#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
    std::cout << "HumanB named " << name << " was created.\n";
}

HumanB::~HumanB(void)
{

}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}