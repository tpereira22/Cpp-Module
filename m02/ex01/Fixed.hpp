/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:04:44 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:04:46 by timartin         ###   ########.fr       */
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

