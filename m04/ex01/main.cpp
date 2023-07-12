#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int	size = 4;
	Animal	*animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
	{
		animals[i]->printIdea();
	}
	for (int i = 0; i < size; i++)
	{
		delete animals[i];
	}

	// const Animal *j = new Dog();
	// const Animal *i = new Cat();

	// std::cout << std::endl;

	// delete j;
	// delete i;
}