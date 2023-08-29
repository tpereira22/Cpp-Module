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
    const Animal        *meta = new Animal();
    const Animal        *j = new Dog();
    const Animal        *i = new Cat();
    const WrongAnimal   *k = new WrongCat();
    const WrongCat      *y = new WrongCat();

    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << y->getType() << " " << std::endl;
    
    std::cout << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    k->makeSound();
    y->makeSound();


    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    delete k;
    delete y;
    return (0);
}
