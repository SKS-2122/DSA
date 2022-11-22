#include<iostream>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create (int a[],int n)
{
    struct node *t,*last;
    first = new node;
    first->data=a[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t= new node;
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;

    }
}

void insert(struct node *p,int index,int x)
{
    struct node *t;
    if(index<0 || index>5)
    {
        return;
    }
    if(index==0)
    {
        t= new node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t= new node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next)
        {
            p->next->prev=t;
        }
        p->next=t;
    }
}
void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    insert(first,5,10);
    display(first);
}
