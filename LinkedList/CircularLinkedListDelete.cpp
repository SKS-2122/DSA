#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head=NULL;

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
int length(struct node *p)
{
    int count=0;
    do{
        count++;
        p=p->next;
    }while(p!=head);
    return count;
}
void display(struct node *p)
{
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
int Delete(struct node *p,int index)
{
    struct node *q;
    int x;
    if(index<0 || index>length(head)){
        return -1;
    }
    if(index==1)
    {
        while(p->next!=head)
        {
            p=p->next;
        }
        x=head->data;
        if(head==p)
        {
            free(head);
            head=NULL;
        }
        else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }
    else{
        for(int i=0;i<index-2;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
    return x;
}
int main()
{
    int a[] ={1,2,3,4,5};
    create(a,5);
    display(head);
    cout<<"Delete element is "<<Delete(head,3)<<endl;
    display(head);
}