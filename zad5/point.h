#ifndef POINT_H
#define POINT_H


class Point
{
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


#endif // POINT_H
