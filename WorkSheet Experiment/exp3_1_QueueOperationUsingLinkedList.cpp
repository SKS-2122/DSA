#include <bits/stdc++.h>
using namespace std;
struct QNode
{
    int data;
    QNode *next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};
struct Queue
{
    QNode *front, *rear;
    Queue() { front = rear = NULL; }
    void enQueue(int x)
    {
        // Create a new LL node
        QNode *temp = new QNode(x);
        // If queue is empty, then
        // new node is front and rear both
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }
        // Add the new node at
        // the end of queue and change rear
        rear->next = temp;
        rear = temp;
    }
    // Function to remove
    // a key from given queue q
    void deQueue()
    {
        // If queue is empty, return NULL.
        if (front == NULL)
            return;
        // Store previous front and
        // move front one node ahead
        QNode *temp = front;
        front = front->next;
        // If front becomes NULL, then
        // change rear also as NULL
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
};
// Driven Program
int main()
{
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.deQueue();
    q.deQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
}

/*INSERT
1. Declare a new node and allocate memory for it.
 2. If front == NULL, 
make both front and rear points to the new node. 
3. Otherwise, add the new node in rear->next. 
make the new node as the rear node. i.e. rear = new node DELETE 

1. Check whether the queue is empty or not 
2. If it is the empty queue (front == NULL) We can’t dequeue the element. 
3. Otherwise, Make the front node points to the next node. i.e front = front->next; if front pointer becomes NULL, set the rear pointer also NULL.
Free the front node’s memory.
*/