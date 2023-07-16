#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain   *_brain;
public:
    Cat(void);
    Cat(Cat const &copy);
    virtual ~Cat(void);

    Cat &operator=(Cat const &rhs);

    void        makeSound(void) const;
    std::string getType(void) const;
    Brain       *getBrain(void) const;
    void        printRandomIdea(void) const;
};

#endif