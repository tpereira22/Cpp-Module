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
	{
		std::cout << "--> SUBJECT TEST <--" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << std::endl;
		delete j;
		delete i;
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "--> TEST RANDOM IDEAS" << std::endl;
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
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "--> TEST DEEP COPY <--" << std::endl;
		Dog dog1;
		{
			Dog dog2 = dog1;
		}
		std::cout << "dog1 still exists -> ";
		dog1.printIdea();
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "--> TEST COPY OVERLOAD <--" << std::endl;
		Dog	*dog1 = new Dog();
		Dog	*dog2 = new Dog(*dog1);
		std::cout << std::endl;
		delete dog1;
		delete dog2;
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "--> TEST ASSIGNMENT OVERLOAD <--" << std::endl;
		Cat *cat1 = new Cat();
		Cat *cat2 = new Cat();
		*cat2 = *cat1;
		std::cout << std::endl;
		delete cat1;
		delete cat2;
		std::cout << std::endl << std::endl;
	}
}
