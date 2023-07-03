#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point   a(2, 4);
    Point   b(1, 2);
    Point   c(3, 1);
    Point   d(1.5, 2);
    Point   e;
    
    std::cout << e << std::endl;
    e = c;
    std::cout << e << std::endl;

    if (bsp(a, b, c, d))
        std::cout << "Is inside of the triangle" << std::endl;
    else
        std::cout << "Is not inside of the triangle" << std::endl;
}