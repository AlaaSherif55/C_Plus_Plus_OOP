#ifndef SHAPE_H
#define SHAPE_H

using namespace std;
class Shape
{
   protected:
     Point p1;
     Point p2;
     int color;
public:
    void setPara(int p1x,int p1y,int p2x,int p2y,int _color){
     p1.set_xy(p1x,p1y);
     p2.set_xy(p2x,p2y);
     color=_color;
    }
    void setPara(int p1x,int p1y,int _color){
     p1.set_xy(p1x,p1y);
     color=_color;
    }
    void setP1(int x ,int y){
        p1.set_xy(x,y);
    }
    void setP2(int x ,int y){
        p2.set_xy(x,y);
    }
    Point getP1(){
         return p1;
    }
    Point getP2(){
       return p2;
    }
    void setColor(int c){
        color=c;
    }
    int getColor(){
        return color;
    }
    Shape():p1(0,0),p2(0,0)
    {
        color=0;
    }
    Shape(int p1x,int p1y,int p2x,int p2y,int _color):p1(p1x,p1y),p2(p2x,p2y)
    {
        color=_color;
    }
    Shape(int p1x,int p1y,int _color):p1(p1x,p1y) //cicrle
    {
        color=_color;
    }
    //void draw(){cout<<"Draw"<<endl;}
    virtual void draw()=0 ;
};

#endif // SHAPE_H
