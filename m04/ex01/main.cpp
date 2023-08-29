/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:59:18 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:59:19 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << std::endl;

	delete j;
	delete i;

	// int	size = 4;
	// Animal	*animals[size];

	// for (int i = 0; i < size; i++)
	// {
	// 	if (i % 2 == 0)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// }
	// for (int i = 0; i < size; i++)
	// {
	// 	animals[i]->printRandomIdea();
	// }
	// for (int i = 0; i < size; i++)
	// {
	// 	delete animals[i];
	// }
	// std::cout << std::endl;
	// std::cout << std::endl;

	// Cat	cat1;
	// Dog dog1;
	// std::cout << std::endl;
	// std::cout << std::endl;
	// Cat	cat1Copy(cat1);
	// Dog	dog1Copy(dog1);
	// std::cout << std::endl;
	// std::cout << std::endl;
	// cat1.printRandomIdea();
	// cat1Copy.printRandomIdea();
	// dog1.printRandomIdea();
	// dog1Copy.printRandomIdea();
	// std::cout << std::endl;
	// std::cout << std::endl;

	// Cat cat2;
	// Dog dog2;
	// std::cout << std::endl;
	// std::cout << std::endl;
	// cat1 = cat2;
	// dog1 = dog2;
	// std::cout << std::endl;
	// std::cout << std::endl;
	// cat1.printRandomIdea();
	// std::cout << cat1.getBrain() << std::endl;
	// cat2.printRandomIdea();
	// std::cout << cat2.getBrain() << std::endl;
	// dog1.printRandomIdea();
	// std::cout << dog1.getBrain() << std::endl;
	// dog2.printRandomIdea();
	// std::cout << dog2.getBrain() << std::endl;
	// std::cout << std::endl;
	// std::cout << std::endl;
}
