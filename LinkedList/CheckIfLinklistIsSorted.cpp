#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first = NULL;

void create(int a[],int n)
{
    struct node *t,*last;
    first= new node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t= new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int isSorted(struct node *p)
{
    int x=-65536;
    while(p!=NULL)
    {
        if(p->data<x)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
int main()
{
    cout<<"Enter 5 elements"<<endl;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    create(a,5);
    int ret =isSorted(first);
    if(ret==1)
    {
        cout<<"Sorted"<<endl;
    }else{
        cout<<"NOT Sorted"<<endl;
    }
}