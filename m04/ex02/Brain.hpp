#ifndef _brain_H
# define _brain_H

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain(void);
    Brain(Brain const &copy);
    ~Brain(void);

    Brain   &operator=(Brain const &rhs);
    std::string *getIdeas(void);
};

#endif