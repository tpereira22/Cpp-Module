#include "Zombie.hpp"

void    randomChump( std::string name );

Zombie* newZombie( std::string name );

int main(void)
{
    Zombie zombie1("Joao");
    Zombie zombie2("YEY");

    zombie1.announce();
    zombie2.announce();

    Zombie  *zombie3 = newZombie("Tiago");
    zombie3->announce();
    delete zombie3;

    randomChump("ZE");

}