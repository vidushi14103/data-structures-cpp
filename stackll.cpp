#include<iostream>
using namespace std;
struct node
{
    int d;
    node *link;
};
class stack
{  
    node *tos;
    public:
    stack()
    {
        tos=NULL;
    }
    void push(int );
    int pop();
    void show();
};
void stack::push(int x)
{
    node *t=new node;
    t->d=x;
    t->link=NULL;
    t->link=tos;
    tos=t;
    cout<<"pushed:"<<x<<endl;
}
int stack::pop()
{
    if(tos==NULL)
    {
        cout<<"stack is empty";
        return 0;
    }
    else
    {
        node *temp=tos;
        int dd=temp->d;
        tos=tos->link;
        delete temp;
        cout<<"popped:"<<dd<<endl;
        return 0;
    }
}
void stack::show()
{
    if(tos==NULL)
    cout<<"stack is empty";
    else
    {
        node *temp;
        temp=tos;
        while(temp!=NULL)
        {
            cout<<temp->d<<endl;
            temp=temp->link;
        }
    }
}
int main()
{
    stack l;
    l.push(3);
    l.push(7);
    l.push(4);
    l.push(9);
    l.push(2);
    l.show();
    l.pop();
    l.pop();
    l.show();
    return 0;
}

