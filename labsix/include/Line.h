#ifndef LINE_H
#define LINE_H

using namespace std;
class Line: public Shape
{
  public:
    Line(int p1x,int p1y,int p2x,int p2y,int _color)
        : Shape(p1x,p1y,p2x,p2y,_color)
    {

    }

    Line()
        :Shape()
    {
    }
    void draw ()
    {
        setcolor(color);
        line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }
    friend istream & operator >> (istream &in,  Line &l);
};

#endif // LINE_H
