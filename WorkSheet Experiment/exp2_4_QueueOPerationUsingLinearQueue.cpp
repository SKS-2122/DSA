#include <iostream>
using namespace std;
struct Queue
{
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }
    ~Queue()
    {
        delete[] queue;
    }
    void Enqueue(int data)
    {
        if (capacity == rear)
        {
            printf("\nQueue is full\n");
            return;
        }
        else
        {
            queue[rear] = data;
            rear++;
        }
        return;
    }
    void Dequeue()
    {
        if (front == rear)
        {
            printf("\nQueue is empty\n");
            return;
        }
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
        return;
    }
    void Display()
    {
        int i;
        if (front == rear)
        {
            printf("\nQueue is Empty\n");
            return;
        }
        for (i = front; i < rear; i++)
        {
            printf(" %d <-- ", queue[i]);
        }
        return;
    }
    void Front()
    {
        if (front == rear)
        {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", queue[front]);
        return;
    }
};
int main(void)
{
    Queue q(4);
    q.Display();
    q.Enqueue(66);
    q.Enqueue(45);
    q.Enqueue(89);
    q.Enqueue(71);
    q.Display();
    q.Enqueue(60);
    q.Display();
    q.Dequeue();
    q.Dequeue();
    printf("\n\nafter two node deletion\n\n");
    q.Display();
    q.Front();
    return 0;
}
/* Working of Queue: 
1. Two pointers FRONT and REAR. 
2. FRONT track the first element of the queue. 
3. REAR track the last element of the queue. 
4. Initially, set value of FRONT and REAR to -1. 

 EnQueue Operation:
 1. Check if the queue is full. 
2. For the first element, set the value of FRONT to 0. 
3. Increase the REAR index by 1. 
4. Add the new element in the position pointed to by REAR.

DeQueue Operation:
1. Check if the queue is empty. 
2. Return the value pointed by FRONT. 
3. Increase the FRONT index by 1. 
4. For the last element, reset the values of FRONT and REAR to -1.
*/