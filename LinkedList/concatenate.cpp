#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first =NULL,*second=NULL,*third=NULL;

void create1(int a[],int n)
{
    struct node *t,*last;
    first = new node;
    first->data=a[0];
    first->next=NULL;
    last =first;

    for(int i=1;i<n;i++)
    {
        t= new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    cout<<"1";
}
void create2(int a[],int n)
{
    struct node *t,*last;
    second = new node;
    second->data=a[0];
    second->next=NULL;
    last =second;

    for(int i=1;i<n;i++)
    {
        t= new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    cout<<"2";
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"4";
}
void Concat(struct node *p,struct node *q)
{
    third=p;
    while(p!=NULL)
    {
        p=p->next;
    }
    p->next=q;
    cout<<"3";


}

int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,0};
    create1(a,5);
    create2(b,5);
    Concat(first,second);
    display(third);
}