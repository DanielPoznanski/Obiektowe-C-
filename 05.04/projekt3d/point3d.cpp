#include "point3d.h"

Point3D::Point3D(int x, int y, int z):pt::Point(x,y)
{
    this -> _z = z;

}
