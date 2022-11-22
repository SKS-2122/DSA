#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int a[],int n)
{
    struct Node *t,*last;
    first=(struct Node*) malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=0;i<n;i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }

}

int main()
{
    int a[]={3,5,7,10,15};
    create(a,5);
    display(first);
}