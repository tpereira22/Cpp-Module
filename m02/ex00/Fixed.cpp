/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:03:35 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:03:37 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _fPointValue(0)
{
    std::cout << "Default Constructor Called" << std::endl;
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
    std::cout << "getRawBits Function Called" << std::endl;
    return this->_fPointValue;
}

void    Fixed::setRawBits(int const raw)
{
    this->_fPointValue = raw;
}
