/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:01:16 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 15:01:17 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    //AAnimal animal1;
    //AAnimal animal2 = new Animal();
    AAnimal *cat = new Cat();
    AAnimal *dog = new Dog();

    std::cout << std::endl;
    cat->printRandomIdea();
    cat->makeSound();
    dog->printRandomIdea();
    dog->makeSound();
    std::cout << std::endl;

    delete cat;
    delete dog;
}
