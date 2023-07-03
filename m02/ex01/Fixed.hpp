#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{

private:

    int                 _fPointValue;
    static const int    _bits;

public:

    Fixed(void);
    Fixed(const int num);
    Fixed(const float num);
    Fixed(Fixed const &copy);
    ~Fixed(void);

    Fixed   &operator=(Fixed const & rhs);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);

#endif

