#include"polygon.h"
using namespace std;

int main()
{
    Polygon p;
    p.addPoint(Polygon::Point{5,10});
    p.addPoint(Polygon::Point{100,200});
    p.addPoint(Polygon::Point{5,150});
    p.draw("polygon.png");

    return 0;
}
