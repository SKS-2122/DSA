#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head=NULL;

void create(int a[],int n)
{
    struct node *t,*last;
    head= new node;
    head->data=a[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        t= new node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
    
}
int length(struct node *p)
{
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=NULL);
    return len;
}

void insert(struct node *p ,int index,int x)
{
    struct node *t;
    if(index<0 && index>length(p))
    {
        return;
    }
    if(index==0)
    {
        t= new node;
        t->data=x;
        if(head==NULL)
        {
            head=t;
            head->next=head;
        }
        else{

           while(p->next!=head)
           {
            p=p->next;
           }
           p->next=t;
           t->next=head;
           head=t;
        }
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t= new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}
void display(struct node *p)
{
    do{
        cout<<p->data<<" ";
        p=p->next;

    }while(p!=head);
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    insert(head,4,10);
    display(head);
}