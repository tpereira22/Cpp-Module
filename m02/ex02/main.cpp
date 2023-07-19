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

    if (a > b)
        std::cout << "a > b" << std::endl;
    else
        std::cout << "false" << std::endl;
    
    if (a >= c)
        std::cout << "a >= b" << std::endl;
    else
        std::cout << "false" << std::endl;

    if (a < b)
        std::cout << "a < b" << std::endl;
    else
        std::cout << "false" << std::endl;

    if (a == c)
        std::cout << "a == b" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "--------------------------" << std::endl;
    d = a + b;
    std::cout << d << std::endl;
    d = a - b;
    std::cout << d << std::endl;
    d = a * b;
    std::cout << d << std::endl;
    d = a / b;
    std::cout << d << std::endl;

    std::cout << "--------------------------" << std::endl;
    std::cout << "a-> " << a << "       b-> " << b << std::endl;
    b = ++a;
    std::cout << "a-> " <<  a << "       b-> " << b  << std::endl;
    --a;
    std::cout << "a-> " <<  a << "       b-> " << b  << std::endl;
    b = a++;
    std::cout << "a-> " <<  a << "       b-> " << b  << std::endl;
    b = a--;
    std::cout << "a-> " <<  a << "       b-> " << b  << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::cout << Fixed::min(a, b) <<  std::endl;
    a++;
    a++;
    a++;
    std::cout << Fixed::min(a, b) <<  std::endl;
    std::cout << Fixed::max(a, b) <<  std::endl;

    // Subject test
    // Fixed   a;
    // Fixed const b(Fixed(5.05f) * Fixed(2));

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;

    // std::cout << b << std::endl;

    // std::cout << Fixed::max(a, b) << std::endl;
    
    return (0);
}
