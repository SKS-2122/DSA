#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
    struct node *t;
    t= new node;
    if(t==NULL)
    {
        cout<<"Queue is Full"<<endl;
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
        }else{
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue()
{
    int x=-1;
    struct node *t;
    if(front==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
}
void display()
{
    struct node *p=front;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    enqueue(4);

    enqueue(5);

    enqueue(6);
    display();
    cout<<"Deleted element "<<dequeue();
    display();


}