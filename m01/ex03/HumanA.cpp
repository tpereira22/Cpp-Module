#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA named " << name << " was created.\n";
}

HumanA::~HumanA()
{

}

void    HumanA::attack( void )
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}