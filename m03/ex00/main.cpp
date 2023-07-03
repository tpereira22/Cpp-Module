#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    trap1("Trap1");

    trap1.attack("Ze");
    trap1.attack("Joao");
    trap1.attack("Joao");
    trap1.beRepaired(4);
    trap1.beRepaired(4);
    trap1.takeDamage(2);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.takeDamage(3);
    trap1.beRepaired(4);
    trap1.attack("Joao");
    trap1.beRepaired(4);
}