/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:07:07 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:07:11 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point(void);
    Point(float const x, float const y);
    Point(Fixed const &x, Fixed const &y);
    Point(Point const &copy);
    ~Point(void);

    Point   &operator=(Point const &rhs);

    Point   operator-(Point const &rhs) const;

    Fixed const   &getX() const;
    Fixed const   &getY() const;

};

std::ostream    &operator<<(std::ostream &o, Point const &rhs);

#endif
