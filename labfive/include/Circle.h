#ifndef CIRCLE_H
#define CIRCLE_H
#include <graphics.h>
#include<Point.h>
using namespace std;
class Circle
{
    Point p;
    Point *ptr;
    int radius;
public:
    Circle():p(0,0)
    {
        //p.set_xy(0,0);
        radius=0;
    }
    Circle(int px,int py, int _radius)
    {
        p.set_xy(px,py);
        radius=_radius;
    }
    void drawCircle()
    {
        circle(p.getX(),p.getY(), radius);
    }
    void set_p(int _x,int _y)
    {
        p.set_xy(_x,_y);
    }
    void set_radius(int _radius)
    {
        radius= _radius;
    }
    void set_circlePara(int x,int y,int _radius)
    {
        p.set_xy(x,y);
        radius= _radius;
    }
    void enterPoint(Point *p)
    {
        ptr=p;
    }
    void paintCircle2()
    {
        ptr->paint();
        cout<<radius<<endl;
    }
    void paintCircle()
    {
        p.paint();
        cout<<radius<<endl;
    }
    void paintCircle(Point x) //assoication
    {
        x.paint();
        cout<<radius<<endl;
    }
    ~Circle()
    {
        cout<<"Destroy circle"<<endl;
    }

};

#endif // CIRCLE_H
