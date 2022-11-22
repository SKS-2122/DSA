#include<iostream>
using namespace std;

struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create (struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q= new int[q->size];
}

void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue (struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue q)
{
    for(int i=q.front+1;i<q.rear;i++)
    {
        cout<<q.Q[i]<<" ";
    }
}
int main(){
    struct queue q;
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);
    enqueue(&q,6);
    display(q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);




}