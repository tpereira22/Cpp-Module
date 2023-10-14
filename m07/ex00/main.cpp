/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:37:54 by timartin          #+#    #+#             */
/*   Updated: 2023/10/14 16:38:08 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>

int main(void)
{
    {   // subject tests
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    std::cout << std::endl;
    {   // my tests
        int a = 5;
        int b = 10;
        char c = 'c';
        char d = 'd';
        float e = 2.5f;
        float f = 3.2f;

        swap(a, b);
        swap(c, d);
        swap(e, f);

        std::cout << "a -> " << a << " | " << "b -> " << b << " | ";
        std::cout << "c -> " << c << " | " << "d -> " << d << " | ";
        std::cout << "e -> " << e << " | " << "f -> " << f << std::endl;

        std::cout << "min -> " << min(a, b) << " | " << min(c, d) << " | " << min(e, f) << std::endl;

        std::cout << "max -> " << max(a, b) << " | " << max(c, d) << " | " << max(e, f) << std::endl;
    
        std::string str1 = "yeye";
        std::string str2 = "yeyi";

        swap(str1, str2);
        std::cout << std::endl << str1 << " | " << str2 << std::endl;
        std::cout << "min -> " << min(str1, str2) << std::endl;
        std::cout << "max -> " << max(str1, str2) << std::endl;
    }
}
