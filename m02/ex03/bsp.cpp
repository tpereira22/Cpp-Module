#include "Point.hpp"

float   calcArea(Point const p1, Point const p2, Point const p3)
{
    Fixed   areaFixed;
    float   areaFloat;

    areaFixed = ((p1.getX() * (p2.getY() - p3.getY())) +
        (p2.getX() * (p3.getY() - p1.getY())) +
        (p3.getX() * (p1.getY() - p2.getY())));
    areaFloat = 0.5 * areaFixed.toFloat();
    return (areaFloat);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    // Point   vectorAP(point-a);
    // Point   vectorAB(point-b);
    // Point   vectorAC(point-c);
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
    else
        return (0);
    return(0);
}