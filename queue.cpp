#include<iostream>
using namespace std;
class queue
{
    int *a,front,rear,size;
    public:
    queue(){front=rear=-1;
    cout<<"enter size of queue:";
    cin>>size;
    a=new int[size];
    }
    void add_rear(int);
    int del_front();
    void show();
};
void queue::add_rear(int x)
{  
    if(rear<10)
    {
    if(rear==-1)
       { rear=front=0;
        a[rear]=x;}
        
    else
       { rear++;
        a[rear]=x;}
        
    }
    else
    cout<<"queue is full:";
}
int queue::del_front()
{
    if(front==-1)
    {cout<<"queue is empty"<<endl;
     return 0;
    }
    else if(front==rear)
    {
       int t=a[front];
       a[front]=-1;
        front=-1;
        return t;
    }
    else
    {  int t=a[front];
       front++;
       return t;
    }
}
void queue::show()
{ 
    if(rear==-1)
    cout<<"queue is empty:";
    else
    {
        cout<<"queue:"<<endl;
        for(int i=front;i<=rear;i++)
        cout<<a[i];
    }
}
int main()
{
    queue p;
    p.add_rear(2);
    p.add_rear(6);
    p.add_rear(5);
    p.add_rear(7);
    p.add_rear(3);
    p.show();
    p.del_front();
    p.del_front();
    p.show();
}
