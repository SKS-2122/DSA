#include <iostream>
using namespace std;
struct queue{
    int front;
    int rear;
    int size;
    int *Q;
};

void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=new int [q->size];
}
void enqueue(struct queue *q , int x)
{
    if((q->rear+1)%q->size==q->front)
    {
        cout<<"Queue d FUll"<<endl;
    }else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        cout<<"Queue is empty"<<endl;
    }else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct queue q)
{
    int i=q.front+1;
    do{
        cout<<q.Q[i];
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);

}
int main()
{
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