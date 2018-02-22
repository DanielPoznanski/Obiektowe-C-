#include <iostream>

using namespace std;

class Point {

private:
    float m_x,m_y;


public:

    float x() const;
    void setX(float x);
    float y() const;
    void setY(float y);
    void move(float x,float y);
};

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

void Point::move(float x, float y){
    m_x += x;
    m_y += y;

}

int main()
{
    Point p;
    p.setX(10);
    p.setY(5);
    p.move(100,200);
    cout << p.x() << " " << p.y() << endl;
    return 0;
}
