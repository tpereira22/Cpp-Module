#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
    std::string  _name;

public:
    Zombie(void);
    ~Zombie();

    void    announce( void );
    void    setName(std::string name);
};

#endif