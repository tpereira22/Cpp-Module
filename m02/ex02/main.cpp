/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:05:42 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:05:43 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed   a(2);
    Fixed   b(5);
    Fixed   c(2);
    Fixed   d;

    std::cout << "------> COMPARISON OPERATORS TEST <------" << std::endl;
    if (a > b)
        std::cout << "a is bigger" << std::endl;
    else
        std::cout << "b is bigger" << std::endl;
    if (a >= c)
        std::cout << "a is bigger or equal" << std::endl;
    else
        std::cout << "c is bigger" << std::endl;
    if (a < b)
        std::cout << "a is smaller" << std::endl;
    else
        std::cout << "b is smaller" << std::endl;
    if (a <= b)
        std::cout << "a is smaller or equal" << std::endl;
    else
        std::cout << "b is smaller" << std::endl;
    if (a == c)
        std::cout << "a == c" << std::endl;
    else
        std::cout << "a != c" << std::endl;
    if (a != b)
        std::cout << "a != b" << std::endl;
    else
        std::cout << "a == b" << std::endl;
    std::cout << std::endl;
    std::cout << "------> ARITHMETIC OPERATORS TEST <------" << std::endl;
    d = a + b;
    std::cout << d << std::endl;
    d = a - b;
    std::cout << d << std::endl;
    d = a * b;
    std::cout << d << std::endl;
    d = a / b;
    std::cout << d << std::endl;
    std::cout << std::endl;
    std::cout << "------> INC/DEC OPERATORS TEST <------" << std::endl;
    std::cout << "a-> " << a++ << "       b-> " << b-- << std::endl;
    std::cout << "a-> " <<  a << "       b-> " << b  << std::endl;
    std::cout << "a-> " <<  ++a << "       b-> " << --b  << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "min -> " << Fixed::min(a, b) <<  std::endl;
    std::cout << "max -> " << Fixed::max(a, b) <<  std::endl;
    Fixed const e(10);
    Fixed const f(15);
    std::cout << "min -> " << Fixed::min(e, f) <<  std::endl;
    std::cout << "max -> " << Fixed::max(e, f) <<  std::endl;
    return (0);
}
