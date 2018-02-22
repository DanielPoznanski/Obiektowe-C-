#include "point.h"


Point::Point(float x, float y){

    m_x=x;
    m_y=y;
}


float Point::y() const
{
return m_y;
}

void Point::setY(float y)
{
m_y = y;
}

float Point::x() const
{
return m_x;
}

void Point::setX(float x)
{
m_x = x;
}
