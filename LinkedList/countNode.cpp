#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*first=NULL;

void create (int a[] , int n)
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
}

int count(struct node *p)
{
    int c=0;
    while(p!=0)
    {
        c++;
        p=p->next;
    }
    return c;

}
int main()
{
    cout<<"Enter 5 elements in array "<<endl;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    create(a,5);
    cout<<"Number of nodes = "<<count(first);

}

