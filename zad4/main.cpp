#include <iostream>
#include <math.h>

using namespace std;

class Point {

private:
    float m_x,m_y;


public:
   // Point();
    Point(float x=0, float y=0);
    float x() const;
    void setX(float x);
    float y() const;
    void setY(float y);
   // void move(float x,float y);
    void move(Point punkt){
        m_x+=punkt.x();
        m_y+=punkt.y();
    }
};

Point::Point(float x, float y){

    m_x=x;
    m_y=y;
}
float distance(Point p, Point punkt){

    return hypot(p.x()-punkt.x(),p.y()-punkt.y());


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

/*void Point::move(float x, float y){
    m_x += x;
    m_y += y;

}
*/
int main()
{
    Point punkt(3,0);
    Point p(0,4);
    cout << distance(p,punkt) << endl;
    return 0;
}
