#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *brain;
public:
    Dog(void);
    Dog(Dog const &copy);
    ~Dog(void);

    Dog &operator=(Dog const &rhs);

    void        makeSound(void) const;
    std::string getType(void) const;
};

#endif