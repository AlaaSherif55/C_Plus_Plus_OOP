#include <iostream>
#define MAX 10
#include<Point.h>
#include<Shape.h>
#include<Circle.h>
#include<Line.h>
#include<Rectangl.h>
using namespace std;
istream & operator >> (istream &in,  Circle &c)
{
    int x,y,r,u;
    cout<<"Enter the center point of circle"<<endl;
    in >> x;
    in >> y;
    cout<<"Enter the radius"<<endl;
    in >> r;
    cout<<"Enter the color of circle"<<endl;
    in >> u;
    c.setPara(x,y,u);
    c.radius=r;
    return in;
}
istream & operator >> (istream &in,  Line &l)
{
    int x,y,m,n,c;
    cout<<"Enter the first point(left top) of line"<<endl;
    in >> x;
    in >> y;
    //l.p1.set_x(x);
    //l.p1.set_y(y);
   cout<<"Enter the second point(right bottom) of line"<<endl;
    in >> m;
    in >> n;
    //l.p2.set_x(x);
    //l.p2.set_y(y);
    cout<<"Enter the color of line"<<endl;
    in >> c;
    l.setPara(x,y,m,n,c);
    return in;
}
istream & operator >> (istream &in,  Rectangl &r)
{
    int x,y,m,n,c;
    cout<<"Enter the first point of rectangle"<<endl;
    in >> x;
    in >> y;
   cout<<"Enter the second point of rectangle"<<endl;
    in >> m;
    in >> n;
    cout<<"Enter the color of rectangle"<<endl;
    in >> c;
    r.setPara(x,y,m,n,c);
    return in;
}
int main()
{
       int gd  = DETECT , gm;
    initgraph(&gd,&gm,(char*)"");
    int counters[3]={0,0,0};
    Circle cir[MAX];
    Rectangl rec[MAX];
    Line l[MAX];
    int num_Shape,type;
    cout<<"Enter the number of shape";
    cin>>num_Shape;
    for(int i=0;i<num_Shape;i++){
        cout<<"Enter the type of shape(line:1, rectangle:2, circle:3 ";
        cin>>type;
    switch(type){
      case 1:{
        Line m;
        cin>>m;
        l[counters[0]]=m;//0 l[0]=m //l[1]=m
        counters[0]++;
        //m.draw();
         break;
      }
      case 2:{
        Rectangl r;
        cin>>r;
        rec[counters[1]]=r;
        counters[1]++;
        //r.draw();
        break;
      }
      case 3:{
        Circle c;
        cin>>c;
        cir[counters[2]]=c;
        counters[2]++;
        //c.draw();
       break;
      }

      default:
        cout<<"OOP! you enter another number";
    }
    }
    for(int i=0;i<counters[0];i++){
        l[i].draw();
    }
    for(int i=0;i<counters[1];i++){
        rec[i].draw();
    }
     for(int i=0;i<counters[3];i++){
       cir[i].draw();
    }
    getch();
    closegraph();
    return 0;
}
