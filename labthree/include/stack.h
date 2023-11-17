#ifndef STACK_H
#define STACK_H

using namespace std;

class Stack
{
    private:
    int Size;
    int top;
    int *arr;
public:
    Stack(Stack &x){
       top=x.top;
       Size=x.Size;
       arr=new int[Size]{0};
       for(int i=0;i<=top;i++){
        arr[i]=x.arr[i];
       }
    }
    Stack(int size=5)
    {
        Size=size;
        top=-1;
        arr=new int[Size] {0};
    }

    int getTop()
    {
        return top;
    }
    void push(int data)
    {
        if(top==Size-1)
        {
            cout<<"stack is full"<<endl;
        }
        else
        {

            top++;
            arr[top]=data;
        }
    }
    int pop()
    {
        if(top!=-1)
        {
            int x=arr[top];
            top--;
            return x;
        }
    }
    friend void print(Stack s);
Stack operator = (Stack &s){
      top=s.top;
      if(Size==s.Size){
        Size=s.Size;
        for(int i=0;i<Size;i++){
            arr[i]=s.arr[i];
        }
         return *this;
      }
       Size=s.Size;
       delete []arr;//reallocation
       arr=new int[Size];
       for(int i=0;i<Size;i++){
            arr[i]=s.arr[i];
        }

     return *this;

  }

 ~Stack(){
    //cout<<"Destructor"<<endl;
     delete []arr;
  }

};
void print(Stack s)
{
    for(int i=s.top; i>=0; i--)
    {
        cout<<s.arr[i];
    }
}
void fun(Stack c){
int x=c.pop();
cout<<x<<endl;
 x=c.pop();
cout<<x<<endl;
}
#endif // STACK_H
