#include<iostream>
using namespace std;
class stack
{   
    int top,*a,size;
    public:
      stack()
      { 
        top=-1;
        cout<<"enter size of stack:";
        cin>>size; 
        a=new int[size];
      }
      void push(int);
      int pop();
      void display();
      int peak();
};
void stack::push(int dd)
{   
    top++;
    if(top<size)
    {a[top]=dd;
    cout<<"element added"<<dd<<endl;}
    else
    {   
        cout<<"stack is full"<<endl;
    }
}
int stack::pop()
{
    if(top>=0)
    {   
        int t=a[top];
        top--;
        return t;
    }
    else 
    {
        cout<<"stack is empty:"<<endl;
        return 0;
    }
}
void stack::display()
{
    if(top==-1)
    cout<<"stack is empty"<<endl;
    else
    {   cout<<"stack:";
        for(int i=0;i<=top;i++)
        cout<<a[i];
        cout<<endl;
    }
}
int stack::peak()
{
    cout<<"peak:"<<a[top]<<endl;
}
int main()
{
    stack s;
    s.push(2);
    s.push(4);
    s.push(5);
    s.push(3);
    s.push(8);
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
    s.peak();
}