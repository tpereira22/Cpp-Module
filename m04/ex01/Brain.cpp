#include "Brain.hpp"

Brain::Brain(void)
{
    int k = 0;

    std::cout << "Brain Default Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Idea nr " + std::to_string(k++);
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

std::string *Brain::getIdeas(void)
{
    return this->ideas;
}