#ifndef RECTANGL_H
#define RECTANGL_H

using namespace std;
class Rectangl: public Shape
{
    public:
    Rectangl(int p1x,int p1y,int p2x,int p2y,int color)
    :Shape(p1x,p1y,p2x,p2y,color)
    {
    }
    Rectangl()
    :Shape()
    {

    }
    void draw()
    {
        setcolor(color);
        rectangle(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }
    friend istream & operator >> (istream &in,  Rectangl &r);
};

#endif // RECTANGL_H
