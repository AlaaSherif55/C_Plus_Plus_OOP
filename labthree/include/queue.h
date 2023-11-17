#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

class Queue
{
  private:
    int Size=0;
    int head=0;
    int rear=0;
    int *arr;
public:
    Queue(int size=5)
    {
        Size=size;
        int head=0;
        int rear=0;
        arr=new int[Size] {0};
    }
    void add(int data)
    {
        if(rear==Size)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            arr[rear]=data;
            rear++;
        }
    }
    int delete_()
    {
        int x;
        if(head!=rear)
        {
            x=arr[head];
            for(int i=1;i<rear;i++){//i=2 i<4
                 arr[i-1] =arr[i];
            }
            rear--;
          return x;
        }else{
            cout<<"Queue is empty"<<endl;
            return -1;
        }

    }
    friend void print(Queue q);
 ~Queue(){
     delete [] arr;
  }
};
void print(Queue q){
for(int i=0;i<q.Size;i++){
     cout<<q.arr[i]<<endl;
}

}
#endif // QUEUE_H
