#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{

private:

    int                 _fPointValue;
    static const int    _bits;

public:

    Fixed(void);
    Fixed(Fixed const &copy);
    ~Fixed(void);

    Fixed   &operator=(Fixed const & rhs);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

};
#endif