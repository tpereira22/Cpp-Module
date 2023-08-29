/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:49:06 by timartin          #+#    #+#             */
/*   Updated: 2023/08/29 14:49:07 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal        *animal = new Animal();
    const Animal        *dog = new Dog();
    const Animal        *cat = new Cat();
    const WrongAnimal   *wrongCatAnimal = new WrongCat();
    const WrongCat      *wrongCat = new WrongCat();

    std::cout << std::endl;
    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrongCatAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    
    std::cout << std::endl;
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();
    wrongCatAnimal->makeSound();
    wrongCat->makeSound();


    std::cout << std::endl;
    delete animal;
    delete dog;
    delete cat;
    delete wrongCatAnimal;
    delete wrongCat;
    return (0);
}
