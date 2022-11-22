#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*top=NULL;

void push(int x)
{
    struct node *t;
    t= new node;
    if(t==NULL)
    {
        cout<<"Stack is Full"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;

    }
}
int pop()
{
    struct node *t;
    int x=-1;
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
void display()
{
    struct node *p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        push(x);
    }
    display();
    cout<<"POP "<<pop()<<endl;
    display();
}