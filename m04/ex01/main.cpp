#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << std::endl;

    delete j;
    delete i;
}