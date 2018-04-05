#ifndef POINT_H
#define POINT_H

namespace pt{
class Point
{
    int _x,_y;
public:
    Point();
    Point(int _x , int _y);
    int x() const;
    int y() const;

};
}
#endif // POINT_H
