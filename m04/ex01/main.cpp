#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal	animals[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
			delete animals[i];
		else
			delete animals[i];
		i++;
	}
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();

	// std::cout << std::endl;

	// delete j;
	// delete i;
}