#include <iostream>
#include "polygon.h"
#include<point.h>

using namespace std;

int main()
{
    Polygon *poly=Polygon::triangle(pt::Point(1,2),pt::Point(3,2),pt::Point(5,5));
    return 0;
}
