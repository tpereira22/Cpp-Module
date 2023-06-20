#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::Zombie(void)
{
    this->_name = "yey";
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " has been destroyed !\n";
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

// void    Zombie::set_name(std::string name)
// {
//     this->_name = name;
// }