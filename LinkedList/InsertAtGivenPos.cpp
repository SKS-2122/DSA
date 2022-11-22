#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first = NULL;

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
void display(struct node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    
}

void insert(int pos ,int x)
{
    struct node *t,*p;
    t= new node;
    t->data=x;
    p=first;
    for(int i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    t->next=p->next;
    p->next=t;

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
    display(first);
    insert(3,10);
    display(first);

}