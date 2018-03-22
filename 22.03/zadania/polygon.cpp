#include "polygon.h"
#include <algorithm>
#include <QImage>

Polygon::Polygon(){
    arr=new Point[4];
    reserved=4;
    points=0;
}

Polygon::Polygon(int size){
    reserved=size + size%4>0 ? 4-size%4 : 0;// operator trójargumentowy
    arr=new Point[reserved];
    points=0;
}

Polygon::Polygon(Polygon &p){
    reserved=p.reserved;
    points=p.points;

    arr=new Point[reserved];
    std::copy(p.arr, p.arr+reserved,this->arr);

}

Polygon::~Polygon(){
    delete [] arr;
}

void Polygon::addPoint(Polygon::Point p){
    if(points==reserved){
        reserved+=4;
        Point *narr=new Point[reserved];
        std::copy(arr,arr+points,narr);
        delete [] arr;
        arr=narr;

    }
    arr[points]=p;
    points++;

}

Polygon::Point &Polygon::poit(int index){
    return arr[index];
}

void Polygon::draw(std::string path)
{
    int maxY=0, maxX=0;
    int a, b;
    int x,y;


    for(int i=0;i<points;i++)
    {
        if(arr[i].x>maxX) maxX=arr[i].x;
        if(arr[i].y>maxY) maxY=arr[i].y;
    }
    QImage image(maxX+10,maxY+10,QImage::Format_RGB32);
    image.fill(0xFFFFFF);

    Point *p, *q,*tmp;

    for(int i=0;i<points-1;i++)
    {
        p=&arr[i];
        q=&arr[i+1];
        a=(float)(q->y-p->y)/(q->x-p->x);
        b=p->y-a*p->x;

        if(p->x>q->x)
        {
            tmp=p;
            p=q;
            q=tmp;
        }
        if(abs(a)<1)
    {
        for(x=p->x;x<=q->x;x++)
        {
            y=a*x+b;
            image.setPixel(x,y,0);
        }
    }
        else
        {
            for(y=p->y;y<=q->y;y++)
            {
                x=(y-b)/a;
                image.setPixel(x,y,0);
            }
        }
    }
    image.save(QString::fromStdString(path));
}




