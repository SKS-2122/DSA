#include<iostream>
using namespace std;
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n)
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
    display(first);
}