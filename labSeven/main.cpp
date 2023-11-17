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
      Line l1;
    int gd  = DETECT , gm;
    initgraph(&gd,&gm,(char*)"");
    int counter=-1;
    Shape *arr[10]= {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};
    int num_Shape,type;


    cout<<"Enter the number of shape";
    cin>>num_Shape;


    for(int i=0;i<num_Shape;i++){
        cout<<"Enter the type of shape(line:1, rectangle:2, circle:3 ";
        cin>>type;


    switch(type){
      case 1:{

        counter++;
        arr[counter]=new Line();//0 l[0]=m //l[1]=m
        cin>>*(Line*)arr[counter];

        //m.draw();
         break;
      }
      case 2:{
        counter++;
        arr[counter]= new Rectangl();//0 l[0]=m //l[1]=m
        cin >> *(Rectangl*)arr[counter];
        //r.draw();
        break;
      }
      case 3:{
        counter++;
        arr[counter]=new Circle();
        cin >> *(Circle*)arr[counter] ;
       break;
      }
    }
}
    for(int i=0;i<=counter;i++)
    {
       arr[i]->draw();
    }
    getch();
    closegraph();
    return 0;
}
