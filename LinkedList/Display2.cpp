#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first = 0;

void create (int a[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=a[0];
    first->next=0;
    last=first;

    for(int i=0;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=0;
        last->next=t;
        last=t;

    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    display(first);
}