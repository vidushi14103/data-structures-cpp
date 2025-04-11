#include<iostream>
using namespace std;
struct node
{
    int d;
    node *link;
};
class queue
{
    node *f,*r;
    public:
    queue()
    {
        f=r=NULL;
    }
    void add_node(int);
    int del_node();
    void show();

};
void queue::add_node(int x)
{
    node *temp=new node;
    temp->d=x;
    temp->link=NULL;
    if(r==NULL)
    r=f=temp;
    else
    r->link=temp;
    r=temp;
    cout<<"added:"<<x<<endl;
}
int queue::del_node()
{
    if(f==NULL)
    {
        cout<<"queue is empty"<<endl;
        return -1;
    }
    else
    {
        node *temp=f;
        f=f->link;
        int t=temp->d;
        delete temp;
        cout<<"deleted:"<<t<<endl;
        return 0;
        
    }
}
void queue::show()
{
    node *temp;
    temp=f;
    if(f==NULL)
    cout<<"queue is empty"<<endl;
    else
    {   
        cout<<"queue:"<<endl;
        while(temp!=NULL)
        {
            cout<<temp->d<<endl;
            temp=temp->link;
        }
    }
}
int main()
{
    queue q;
    q.add_node(2);
    q.add_node(5);
    q.add_node(8);
    q.show();
    q.del_node();
    q.del_node();
    q.show();
    return 0;
}