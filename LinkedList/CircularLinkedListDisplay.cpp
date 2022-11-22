#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

void create(int a[],int n)
{
    struct node *t,*last;
    head=new node;
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
void display(struct node *p)
{
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    printf("\n");
}

int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    display(head);
}