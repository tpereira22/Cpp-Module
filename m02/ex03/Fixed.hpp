/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:06:39 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:06:40 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    // Constructors
    Fixed(void);
    Fixed(const int num);
    Fixed(const float num);
    Fixed(Fixed const &copy);
    
    // Destructor
    ~Fixed(void);

    // Assignment Operator Overload
    Fixed   &operator=(Fixed const &rhs);
    
    // Comparison Operator Overload
    bool    operator>(Fixed const &rhs) const;
    bool    operator>=(Fixed const &rhs) const;
    bool    operator<(Fixed const &rhs) const;
    bool    operator<=(Fixed const &rhs) const;
    bool    operator==(Fixed const &rhs) const;
    bool    operator!=(Fixed const &rhs) const;

    // Arithmetic Operator Overload
    Fixed   operator+(Fixed const &rhs) const;
    Fixed   operator-(Fixed const &rhs) const;
    Fixed   operator*(Fixed const &rhs) const;
    Fixed   operator/(Fixed const &rhs) const;

    // Increment/Decrement Operator Overload
    Fixed   &operator++(void);  // ++i;
    Fixed   operator++(int);    // i++;
    Fixed   &operator--(void);  // --i;
    Fixed   operator--(int);    // i--;
    
    // Getter and Setter
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    // Conversion Functions
    float   toFloat(void) const;
    int     toInt(void) const;

    // Max/Min Functions
    static Fixed        &min(Fixed &fp1, Fixed &fp2);
    static const Fixed  &min(Fixed const &fp1, Fixed const &fp2);
    static Fixed        &max(Fixed &fp1, Fixed &fp2);
    static const Fixed  &max(Fixed const &fp1, Fixed const &fp2);
};

// Ostream Overload
std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);

#endif
