#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*first = NULL;

void create (int a[],int n)
{
    struct node *t,*last;
    first = new node;
    first->data =a[0];
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
    cout<<"Node created"<<endl;
}

int add(struct node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int main()
{
    cout<<"Enter 5 elements"<<endl;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    create(a,5);
   cout<<"Sum of elements = "<< add(first);
}