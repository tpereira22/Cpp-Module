#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain   *_brain;
public:
    Dog(void);
    Dog(Dog const &copy);
    virtual ~Dog(void);

    Dog &operator=(Dog const &rhs);

    void        makeSound(void) const;
    std::string getType(void) const;
    Brain       *getBrain(void) const;
    void        printRandomIdea(void) const;
};

#endif