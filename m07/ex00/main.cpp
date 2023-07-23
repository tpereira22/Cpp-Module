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

        std::cout << a << " | " << b << " | " << c << " | " << d << " | " << e << " | " << f << std::endl;

        std::cout << min(a, b) << " | " << min(c, d) << " | " << min(e, f) << std::endl;

        std::cout << max(a, b) << " | " << max(c, d) << " | " << max(e, f) << std::endl;
    }
}