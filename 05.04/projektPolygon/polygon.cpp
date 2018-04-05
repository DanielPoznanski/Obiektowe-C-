#include "polygon.h"

Polygon::Polygon(int size)
{
    this ->size = size ;
    arr=new pt::Point[size];
}

Polygon *Polygon::triangle(pt::Point p1, pt::Point p2, pt::Point p3)
{
    Polygon *p=new Polygon(3);
    p->arr[0]=p1;
    p->arr[1]=p2;
    p->arr[2]=p3;
    return p;
}
