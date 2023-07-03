#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name );

int main(void)
{
    Zombie  *zombietest;

    zombietest = zombieHorde(4, "Horde 1");
    zombietest[0].announce();
    zombietest[3].announce();
    zombietest[5].announce();
    delete [] zombietest;
    
    zombietest = zombieHorde(2, "Horde 2");
    zombietest[0].announce();
    zombietest[3].announce();
    delete [] zombietest;

}