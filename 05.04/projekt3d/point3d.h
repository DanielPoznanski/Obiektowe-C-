#ifndef POINT3D_H
#define POINT3D_H
#include <point.h>


class Point3D:public pt::Point
{
    int _z;
public:
    Point3D(int x , int y , int z);
};

#endif // POINT3D_H
