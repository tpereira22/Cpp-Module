/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:09:07 by timartin          #+#    #+#             */
/*   Updated: 2023/10/06 15:09:08 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>

Base* generate(void)
{
    switch (std::rand() % 3 + 1) {
        case 1:
            return (new A());
        case 2:
            return (new B());
        case 3:
            return (new C());
        default:
            std::cout << "error" << std::endl;
            return NULL;
    }
    return NULL;
}

void identify(Base* p)
{
    std::cout << "Identify Ptr" << std::endl;
    if (dynamic_cast<A*>(p))
        std::cout << "Object is type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Object is type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Object is type C" << std::endl;
    else
        std::cout << "Object not convertable" << std::endl;
}


void identify(Base& p)
{
    std::cout << "Identify Ref" << std::endl;
    bool sucess = false;
    try
    {
        try
        {
            A a = dynamic_cast<A&>(p);
            std::cout << "Object is type A" << std::endl;
            sucess = true;
        }
        catch(const std::exception& e) {}
        try
        {
            B b = dynamic_cast<B&>(p);
            std::cout << "Object is type B" << std::endl;
            sucess = true;
        }
        catch(const std::exception& e) {}
        try
        {
            C c = dynamic_cast<C&>(p);
            std::cout << "Object is type C" << std::endl;
            sucess = true;
        }
        catch(const std::exception& e) {}
        if (!sucess)
            throw std::runtime_error("Object not convertable!");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void printA(A* ptr)
{
    (void)ptr;
    std::cout << "is A" << std::endl;
}

int main(void)
{
    Base* basePtr = NULL;

    for (int i = 0; i != 5; i++)
    {
        basePtr = generate();
        identify(basePtr);
        identify(*basePtr);
        delete basePtr;
        std::cout << "------------------" << std::endl;
    }
    basePtr = new Base();
    identify(basePtr);
    identify(*basePtr);
    delete basePtr;
    std::cout << "------------------" << std::endl;
    basePtr = NULL;
    identify(basePtr);
}
