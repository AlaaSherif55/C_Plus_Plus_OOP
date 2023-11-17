#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;
class Complex
{
    private:
    int real;
    int image;
 public:
    Complex(int r=0,int i=0){
        real=r;
        image=i;
    }
    void setReal(int r){
        real=r;
    }
    void setComplex(int r,int i ){
          real=r;
          image=i;
    }
    void setImage(int i){
        image=i;
    }
    int getReal()const{
        return real;
    }
    int getImage()const{
        return image;
    }
     void print(){
        cout<<"The number: "<<real;
        if(image>0){
            cout<<"+"<<image<<"j";
        }else if(image<0){
             cout<<image<<"j";
        }
    }
    Complex add(Complex c);
    //c5=c3+c2
    Complex operator +(const Complex &c){
      Complex res(real+c.getReal(),image+c.getImage());
      return res;
    }
     //c5=c3-c2
    Complex operator -(const Complex &c){
      Complex res(real-c.getReal(),image-c.getImage());
      return res;
    }
    //c5+=c2===>c5=c5+c2
    Complex operator +=(const Complex &c){
    real=real+c.getReal();
    image=image+c.getImage();
    return *this;
    }
    //c5-=c2===>c5=c5-c2
    Complex operator +=(Complex &c){
    real=real+c.getReal();
    image=image+c.getImage();
    return *this;
    }
   //c5=c3+10
   Complex operator +(int i){
   Complex res(real+i,image);
      return res;
   }
   //c3==c2
   int operator ==(const Complex &c){
     return real==c.real&&image==c.image;
   }

//c1[1] --> image  --> overloading [1]
//c1[0] --> Real --> overloading [0]
   int operator [](int i){//c5[0] real c5[real]==>real
      if(i==0){
        return real;
      }else{
        return image;
      }
   }
    int operator [](char *a){//image c2["image"}
      if(a[0]=='i',a[1]=='m',a[2]=='a',a[3]=='g',a[4]=='e'){
       return image;
      }
      if(a[0]=='r',a[1]=='e',a[2]=='a',a[3]=='l'){

        return real;
      }
      return 0;
   }
     //++c5 prefix
  Complex operator ++(){
      real=real+1;
      return *this;
   }

    //c5++ postfix
   Complex operator ++(int){
      Complex temp=*this;
      real=real+1;
      return temp;
   }
     //--c5 prefix
   Complex operator --(){
      real=real-1;
      return *this;
   }
    //c5-- postfix
   Complex operator --(int){
      Complex temp=*this;
      real=real-1;
      return temp;
   }
   operator float(){
       return real;
   }
   //friend ostream & operator << (ostream &out, const Complex &c);
   friend istream & operator >> (istream &in,  Complex &c);
};

#endif // COMPLEX_H
