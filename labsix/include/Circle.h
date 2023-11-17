#ifndef CIRCLE_H
#define CIRCLE_H
#include <graphics.h>

using namespace std;
class Circle: public Shape
{
   int radius;
public:
    Circle():Shape()
    {
        radius=0;
    }
    Circle(int px,int py,int color, int _radius):Shape(px,py,color)
    {
        radius=_radius;
    }
    ~Circle ()
    {
        cout<<"destructor"<<endl;
    }
    void draw() //override
    {
        cout<<"ENTER Draw in circel"<<endl;
        setcolor(color);
        circle(p1.getX(),p1.getY(),radius);
    }
    friend istream & operator >> (istream &in,  Circle &c);
};

#endif // CIRCLE_H
