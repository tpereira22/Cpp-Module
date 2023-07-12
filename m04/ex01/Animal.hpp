#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal(void);
    Animal(Animal const &copy);
    virtual ~Animal(void);

    Animal  &operator=(Animal const &rhs);
    virtual void    makeSound(void) const;
    std::string getType(void) const;
    virtual void printIdea(void) const;
};

#endif