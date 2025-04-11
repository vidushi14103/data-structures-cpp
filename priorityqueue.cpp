#include<iostream>
using namespace std;
struct item
{
    int value;
    int priority;
};
class priority
{
    public:
    item pr[1000];
    int size=-1;
    void insertpq(item [],int ,int ,int );
    void enqueue(int ,int );
    void peek();


};
void priority::enqueue(int value,int priority)
{
    
}
void priority::insertpq(item pr[],int size,int x,int y)
{
    ite
    t->value=x;
    t->priority=y;
    if(size==-1)
    {
        size=0;
        pr[size]=t;    
    }
    else
    {
        while(y>t->priority)
    }

}
