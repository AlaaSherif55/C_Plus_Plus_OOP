#include <iostream>
#include<Circle.h>
#include<Point.h>
#include<Line.h>
using namespace std;

int main()
{
     int gd  = DETECT , gm;
    initgraph(&gd,&gm,(char*)"");

    Line l1(5,7,125,144);
    l1.drawLine();
    Circle c1(150,150,100);
    c1.drawCircle();

    getch();
    closegraph();
    return 0;
}
