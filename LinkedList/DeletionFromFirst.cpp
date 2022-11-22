#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first = NULL;

void create(int a[],int n)
{
    struct node *t,*last;
    first= new node;
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
// int count(struct node *p)
// {
//     int count=0;
//     while(p!=NULL)
//     {
//         count++;
//         p=p->next;

//     }
//     return count;
// }

int Delete(struct node *p,int index)
{
    struct node *q;
    int x=-1;
    if(index<1 || index>5)
    {
        return -1;
    }
    if(index == 1)
    {
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;

        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
    return -1;
    
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
    create(a,5);
    cout<<"Deleted element is ="<<Delete(first,2)<<endl;
    display(first);
}