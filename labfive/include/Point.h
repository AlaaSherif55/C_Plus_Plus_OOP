#ifndef POINT_H
#define POINT_H
#include <graphics.h>
using namespace std;

class Point
{
    int x,y;
    public:
        void set_x(int _x){
            x=_x;
        }
        void set_y(int _y){
        y= _y;
        }
        void set_xy(int _x, int _y){
            x=_x;
            y=_y;
        }
        int getX(){
            return x;
        }
         int getY(){
            return y;
        }
        void paint(){
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        Point(int _x,int _y){
            x=_x;
            y=_y;
        }
        Point(){
            x=0;
            y=0;
            cout<<"constructor point"<<endl;
        };
        ~Point(){
            cout<<"Destroy Point"<<endl;
        }
};

#endif // POINT_H
