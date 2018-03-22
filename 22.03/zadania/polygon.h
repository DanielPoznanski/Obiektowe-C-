#ifndef POLYGON_H
#define POLYGON_H
#include <string>

class Polygon
{
public:
    struct Point{
     int x,y;
    };
private:
    Point *arr;
    int reserved;
    int points;
public:
    Polygon();
    Polygon(int size);
    Polygon(Polygon &p);
    ~Polygon();
    void addPoint(Point p);
    Point &poit(int index);
    void draw(std::string path);
};

#endif // POLYGON_H
