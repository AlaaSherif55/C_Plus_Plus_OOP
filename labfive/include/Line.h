#ifndef LINE_H
#define LINE_H
#include <graphics.h>
using namespace std;

class Line
{
   Point lp1,lp2;
    Point *ptr1,*ptr2;
    public:
        Line():lp1(0,0),lp2(0,0){
            ptr1=NULL;
            ptr2=NULL;
        }
        Line(int p1x,int p1y, int p2x,int p2y):lp1(p1x,p1y),lp2(p2x,p2y){

        }
        Line(Point *p1,Point *p2){
            ptr1=p1;
            ptr2=p2;
        }
        void drawLine(){

	    line(lp1.getX(),lp1.getY(),lp2.getX(),lp2.getY());

	    }
        void setPoints(Point *p1,Point *p2){
            ptr1=p1;
            ptr2=p2;
        }
        void set_lp1(int _x, int _y){
            lp1.set_xy(_x,_y);
        }
        void set_lp2(int _x, int _y){
            lp2.set_xy(_x,_y);
        }
        void paintLine(){
            lp1.paint();
            lp2.paint();
        }
        void paintLine(Point p1,Point p2){//assoication
            p1.paint();
            p2.paint();
        }
        void paintLine2(){//assoication
           if(ptr1!=NULL&&ptr2!=NULL){
            ptr1->paint();
            ptr2->paint();
           }
        }
        ~Line(){
            cout<<"Destroy Line"<<endl;
        }
};

#endif // LINE_H
