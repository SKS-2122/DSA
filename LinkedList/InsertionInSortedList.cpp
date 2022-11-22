#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*first =NULL;

void create(int a[],int n)
{
    struct node *t,*last;
    first = new node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void sortedInsert(struct node *p,int x)
{
    struct node *t,*q=NULL;
    t=new node;
    t->data=x;
    t->next=NULL;

    if(first==NULL)
        first=t;

    else{
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}
void display(struct node *p)
{
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    cout<<"Enter 5 number "<<endl;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    create(a,5);
    sortedInsert(first,10);
        sortedInsert(first,1);

    display(first);

}