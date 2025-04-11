#include<iostream>
using namespace std;
class cqueue
{
    int f,r,*a,size;
    public:
    void add_ele(int);
    int del_ele();
    void show();
    cqueue();
};
cqueue::cqueue()
{
    f=r=-1;
    cout<<"enter size of queue:";
    cin>>size;
    a=new int[size];
}
void cqueue::add_ele(int x)
{
    if(f==0 && r==size-1||f==r+1)
    cout<<"circular queue is full";
    else if(f==-1)
    {
        f=r=0;
        a[r]=x;
    }
    else if(r<size-1)
    {
        r++;
        a[r]=x;
    }
    else if (r==size-1 && f!=0)
    {
        r=0;
        a[r]=x;
    }

}
int cqueue::del_ele()
{
    if(f==-1)
    cout<<"item can't be deleted"<<endl;
    else
    {   
        int d=a[f];
        if(f==r)
        f=r=-1;
        else if(f==size-1)
        f=0;
        else
        f++;
        return d;
    }
}
void cqueue::show()
{
    int i;
    if(r>f)
    {   
        cout<<"queue:"<<endl;
        for(i=f;i<=r;i++)
        cout<<a[i];
        cout<<endl;
    }
    else 
    {   
        cout<<"queue:"<<endl;
        for(i=f;i<=size-1;i++)
        cout<<a[i];
        for(i=0;i<=r;i++)
        cout<<a[i];
        cout<<endl;
    }
}
int main()
{
    cqueue a;
    a.add_ele(4);
    a.add_ele(8);
    a.add_ele(4);
    a.add_ele(9);
    a.add_ele(2);
    a.show();
    a.del_ele();
    a.show();
    return 0;
}