#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void insert(int x)
{
    struct node *t,*last;
    t= new node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else{
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
    cout<<endl;
}
int main()
{
    cout<<"Enter 5 elements"<<endl;
    int x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        insert(x);

    }
    display(first);
}