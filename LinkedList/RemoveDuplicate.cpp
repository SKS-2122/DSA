#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*first = NULL;

void create (int a[],int n)
{
    struct node *t,*last;
    first=new node;
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
void Remove(struct node *p)
{
    struct node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

int main()
{
    cout<<"Enter N"<<endl;
    int n;
    cin>>n;
    cout<<"Enter n elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    create(a,n);
    Remove(first);
    display(first);
}