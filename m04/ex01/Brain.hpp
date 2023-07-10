#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
protected:
    std::string ideas[100];
public:
    Brain(void);
    Brain(Brain const &copy);
    ~Brain(void);

    Brain   &operator=(Brain const &rhs);
};

#endif