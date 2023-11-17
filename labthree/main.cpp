#include <iostream>
#include<stack.h>
#include<queue.h>
using namespace std;


int main()
{
    Queue q(5);
    Stack s;
    q.add(1);
    q.add(2);
    q.add(3);
    q.add(4);
    q.add(5);
    print(q);
    return 0;
}
