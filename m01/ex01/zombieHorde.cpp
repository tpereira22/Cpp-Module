#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie  *zombiehorde = new Zombie[N];

    i = 0;
    while (i < N)
    {
        zombiehorde[i].setName(name);
        i++;
    }
    return (zombiehorde);
}