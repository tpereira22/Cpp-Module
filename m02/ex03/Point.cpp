#include "Point.hpp"

// Constructors
Point::Point(void) : _x(0), _y(0) {}
Point::Point(float const x, float const y) : _x(x), _y(y) {}
Point::Point(Fixed const &x, Fixed const &y) : _x(x), _y(y) {}
Point::Point(Point const &copy) : _x(copy._x), _y(copy._y) {}

// Destructor
Point::~Point(void)
{

}

// Assigment Operator Overload
Point   &Point::operator=(Point const &rhs)
{
    return *this;
}

Point   Point::operator-(Point const &rhs) const
{
    return Point(this->getX() - rhs.getX(), this->getY() - rhs.getY());
    // Fixed   temp;
}

// Getters
Fixed const   &Point::getX(void) const
{
    return this->_x;
}

Fixed const   &Point::getY(void) const
{
    return this->_y;
}

std::ostream    &operator<<(std::ostream &o, Point const &rhs)
{
    o << rhs.getX() << ", " << rhs.getY();
    return o;
}