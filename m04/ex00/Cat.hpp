#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
private:
public:
    Cat(void);
    Cat(Cat const &copy);
    ~Cat(void);

    Cat &operator=(Cat const &rhs);

    void        makeSound(void) const;
    std::string getType(void) const;
};

#endif