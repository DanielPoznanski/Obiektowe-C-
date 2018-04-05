#include "point.h"
namespace pt{
Point::Point()
{
    this-> _x = 0;
    this-> _y = 0;
}

Point::Point(int x , int y)
{
    this-> _x = x ;
    this-> _y = y ;
}

int Point::x() const
{
    return _x;
}
int Point::y() const
{
    return _y;
}

}
