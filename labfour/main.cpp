#include <iostream>
#include<Complex.h>
using namespace std;

ostream & operator << (ostream &out, const Complex &c)//cout<<c5
{
    out << c.getReal();
    out << "+i" << c.getImage() << endl;
    return out;
}

istream & operator >> (istream &in,  Complex &c)//cin<<c5 //c5[image]
{
    in >> c.real;
    in >> c.image;
    return in;
}
//c5=10+c2
Complex operator +(int i, Complex &c){
   Complex res(c.getReal()+i,c.getImage());
    return res;
    }
//c5=10-c2
Complex operator -(int i, Complex &c){
   Complex res(c.getReal()-i,c.getImage());
    return res;
    }
Complex Complex::add(Complex c){
      Complex res;
      res.setImage(image+c.getImage());
      res.setReal(real+c.getReal());
      return res;
    }
Complex addStandAlone(Complex c,Complex y){
      Complex res;
      res.setImage(y.getImage()+c.getImage());
      res.setReal(y.getReal()+c.getReal());
      return res;
}
Complex subStandAlone(Complex c,Complex y){
      Complex res;
      res.setImage(c.getImage()-y.getImage());
      res.setReal(c.getReal()-y.getReal());
      return res;
    }
 void printStandAlone(Complex c ){
        cout<<"The number: "<<c.getReal();
        if(c.getImage()>0){
            cout<<"+"<<c.getImage()<<"j";
        }else if(c.getImage()<0){
             cout<<c.getImage()<<"j";
        }
}

int main()
{
   Complex c1(10,10),c2(20,20);
   cout<<endl<<"=================================="<<endl;
     Complex c5(1,3);

    return 0;
}
