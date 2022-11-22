#include<iostream>
using namespace std;

struct node {
    int data;
    struct node * next;
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
        cout<<p->data<<endl;
        p=p->next;
    }
}

struct node* Lsearch(struct node *p,int key)
{
    struct node *q=NULL;

    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first; 
            first=p;   
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
int main()
{
    struct node *temp;
    int a[]={1,2,3,4,5,6,7,8,9,0};
    create(a,10);
    temp=Lsearch(first,7);
    temp=Lsearch(first,9);


    if(temp)
    {
        cout<<"Key if found "<<temp->data<<endl;
    }else{
        cout<<"Key not found"<<endl;
    }
    display(first);
}