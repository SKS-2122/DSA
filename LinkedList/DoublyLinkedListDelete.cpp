#include<iostream>
using namespace std;
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void craete(int a[],int n)
{
    struct node *t,*last;
    first= new node;
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

int Delete(struct node *p,int index)
{
    struct node *q;
    int x=-1;
    if(index<1 ||index>5)
    return x;
    if(index==1)
    {
        first=first->next;
        if(first)
        {
            first->prev=NULL;

        }
        x=p->data;
        free(p);
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
        p->next->prev=p->prev;
        x=p->data;
        free(p);

    }
    return x;
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
    craete(a,5);
    cout<<"Deleted element is "<<Delete(first,2)<<endl;;
    display(first);
}