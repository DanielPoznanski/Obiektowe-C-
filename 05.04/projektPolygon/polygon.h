#ifndef POLYGON_H
#define POLYGON_H
namespace pt{
Class Point;
}

class Polygon
{
    int size ;
    pt::Point *arr;
    Polygon(int size);
public:
    static Polygon *triangle(pt::Point p1 , pt::Point p2 , pt::Point p3);
};

#endif // POLYGON_H
