/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:06:45 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:06:46 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    {
        std::cout << "TEST 1" << std::endl;
        Point   a(2, 4);
        Point   b(1, 2);
        Point   c(3, 1);
        Point   d(1.5, 2);
        
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;    

        if (bsp(a, b, c, d))
            std::cout << "Is inside of the triangle" << std::endl;
        else
            std::cout << "Is not inside of the triangle" << std::endl;
    }
    {
        std::cout << "TEST 2" << std::endl;
        Point   a(2, 4);
        Point   b(1, 2);
        Point   c(3, 1);
        Point   d(3, 2);
        
        if (bsp(a, b, c, d))
            std::cout << "Is inside of the triangle" << std::endl;
        else
            std::cout << "Is not inside of the triangle" << std::endl;
    }
}
