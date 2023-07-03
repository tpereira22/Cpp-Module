#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _fPointValue(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int Constructor Called" << std::endl;
    this->_fPointValue = num * (1 << _bits);
}

Fixed::Fixed(const float num)
{
    std::cout << "Float Constructor Called" << std::endl;
    this->_fPointValue = roundf(num * (1 << _bits));
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = copy;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy Assignment Operator Called" << std::endl;
    this->_fPointValue = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits Function Called" << std::endl;
    return this->_fPointValue;
}

void    Fixed::setRawBits(int const raw)
{
    this->_fPointValue = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_fPointValue / (1 << _bits));
}

int     Fixed::toInt(void) const
{
   return (this->_fPointValue >> _bits);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}