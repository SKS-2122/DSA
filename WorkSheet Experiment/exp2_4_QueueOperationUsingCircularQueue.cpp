#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int rear, front, size, *arr;

public:
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
    void enQueue(int value);
    int deQueue();
    void displayQueue();
};
void Queue::enQueue(int value)
{
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
        printf("\nQueue is Full");
        return;
    }
    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }
    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }
    else
    {
        rear++;
        arr[rear] = value;
    }
}
int Queue::deQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return INT_MIN;
    }
    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
        front = 0;
    else
        front++;
    return data;
}
void Queue::displayQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", arr[i]);
        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
}
int main()
{
    Queue q(5);
    q.enQueue(13);
    q.enQueue(24);
    q.enQueue(17);
    q.enQueue(-4);
    q.displayQueue();
    printf("\nDeleted value = %d", q.deQueue());
    printf("\nDeleted value = %d", q.deQueue());
    q.displayQueue();
    q.enQueue(71);
    q.enQueue(81);
    q.enQueue(1);
    q.displayQueue();
    q.enQueue(20);
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
