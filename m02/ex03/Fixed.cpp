#include "Fixed.hpp"

const int Fixed::_bits = 8;

// Constructors
Fixed::Fixed(void) : _fPointValue(0)
{
    //std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int num)
{
    //std::cout << "Int Constructor Called" << std::endl;
    this->_fPointValue = num * (1 << _bits);
}

Fixed::Fixed(const float num)
{
    //std::cout << "Float Constructor Called" << std::endl;
    this->_fPointValue = roundf(num * (1 << _bits));
}

Fixed::Fixed(Fixed const &copy)
{
    //std::cout << "Copy Constructor Called" << std::endl;
    *this = copy;
}

// Destructors
Fixed::~Fixed(void)
{
    //std::cout << "Destructor Called" << std::endl;
}

// Assignment Operator Overload
Fixed   &Fixed::operator=(Fixed const &rhs)
{
    //std::cout << "Copy Assignment Operator Called" << std::endl;
    this->_fPointValue = rhs.getRawBits();
    return *this;
}

// Comparison Operator Overload
bool    Fixed::operator>(Fixed const &rhs) const
{
    return this->_fPointValue > rhs._fPointValue;
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return this->_fPointValue >= rhs._fPointValue;
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return this->_fPointValue < rhs._fPointValue;
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return this->_fPointValue <= rhs._fPointValue;
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return this->_fPointValue != rhs._fPointValue;
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    return this->_fPointValue == rhs._fPointValue;
}

// Arithmetic Operator Overload
Fixed   Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

// Increment/Decrement Operator Overload
Fixed   &Fixed::operator++(void)        // ++i
{
    this->setRawBits(_fPointValue + 1);
    return *this;
}

Fixed   Fixed::operator++(int)     // i++
{
    Fixed   temp(this->toFloat());
    this->setRawBits(_fPointValue + 1);
    return temp;
}

Fixed   &Fixed::operator--(void)         // --i
{
    this->setRawBits(_fPointValue - 1);
    return *this;
}

Fixed   Fixed::operator--(int)     // i--
{
    Fixed   temp(this->toFloat());
    this->setRawBits(_fPointValue - 1);
    return temp;
}

// Getter
int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits Function Called" << std::endl;
    return this->_fPointValue;
}

// Setter
void    Fixed::setRawBits(int const raw)
{
    this->_fPointValue = raw;
}

// Conversion functions
float   Fixed::toFloat(void) const
{
    return ((float)this->_fPointValue / (1 << _bits));
}

int     Fixed::toInt(void) const
{
   return (this->_fPointValue >> _bits);
}

// Max/Min Functions
Fixed   &Fixed::min(Fixed &fp1, Fixed &fp2)
{
    if (fp1.getRawBits() < fp2.getRawBits())
        return fp1;
    else
        return fp2;
}

const Fixed   &Fixed::min(Fixed const &fp1, Fixed const &fp2)
{
    return (fp1 < fp2 ? fp1 : fp2);
}

Fixed   &Fixed::max(Fixed &fp1, Fixed &fp2)
{
    if (fp1.getRawBits() > fp2.getRawBits())
        return fp1;
    else
        return fp2;
}

const Fixed   &Fixed::max(Fixed const &fp1, Fixed const &fp2)
{
    return (fp1 > fp2 ? fp1 : fp2);
}

// Ostream Overload
std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}