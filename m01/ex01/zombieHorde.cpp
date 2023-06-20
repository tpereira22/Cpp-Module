#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombies[N];
    int i;

    i = 0;
    while (i <= N);
    {
        zombies[i] = new Zombie(name);
        i++;
    }
    return (zombies[0]);
}