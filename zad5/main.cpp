#include <iostream>
#include <math.h>
#include <point.h>

using namespace std;


float distance(Point p, Point punkt){

    return hypot(p.x()-punkt.x(),p.y()-punkt.y());


}

int main()
{
    Point punkt(3,0);
    Point p(0,4);
    cout << distance(p,punkt) << endl;
    return 0;
}
