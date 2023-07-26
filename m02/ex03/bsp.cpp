/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:06:20 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:06:21 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   calcArea(Point const p1, Point const p2, Point const p3)
{
    Fixed   areaFixed;
    float   areaFloat;

    areaFixed = ((p1.getX() * (p2.getY() - p3.getY())) +
        (p2.getX() * (p3.getY() - p1.getY())) +
        (p3.getX() * (p1.getY() - p2.getY())));
    areaFloat = -1 * areaFixed.toFloat();
    return (areaFloat);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   areaABC = calcArea(a, b, c);
    float   areaPAB = calcArea(point, a, b);
    float   areaPBC = calcArea(point, b, c);
    float   areaPCA = calcArea(point, c, a);
    float   barCoord1 = areaPAB / areaABC;
    float   barCoord2 = areaPBC / areaABC;
    float   barCoord3 = areaPCA / areaABC;
    
    if ((barCoord1 >= 0 && barCoord1 <= 1) &&
        (barCoord2 >= 0 && barCoord2 <= 1) &&
        (barCoord3 >= 0 && barCoord3 <= 1))
        return (1);
    return(0);
}
