#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(Brain const &copy)
{    
    std::cout << "Brain Copy Constructor" << std::endl;
    *this = copy;
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor" << std::endl;
}

Brain   &Brain::operator=(Brain const &rhs)
{
    return *this;
}