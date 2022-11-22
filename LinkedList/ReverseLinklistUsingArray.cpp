#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first = NULL;

void create (int a[],int n)
{
    struct node *t,*last;
    first =new node;
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
int count(struct node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

void Reverse(struct node *p)
{
    int a[count(p)],i=0;
    struct node *q=p;
    // a= new [5];
    while(q!=NULL)
    {
        a[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->data=a[i];
        q=q->next;
        i--;
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

int main()
{
    cout<<"Enter 5 elements"<<endl;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];

    }
    create (a,5);
    Reverse(first);
    display(first);
}