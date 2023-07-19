/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:03:45 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:03:46 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
