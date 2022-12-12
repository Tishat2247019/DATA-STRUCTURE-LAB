#include <iostream>
using namespace std;

#define s 5
int q[s];
int front = 0;
int rear = 0;
int counter = 0;

bool isEmpty()
{
    if (front == rear)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if (rear == s)
    {
        return true;
    }
    return false;
}

void enQueue(int item)
{
    if (isFull())
    {
        cout << "The Queue is full " << endl;
    }
    else
    {
        q[rear] = item;
        rear++;
        counter++;
    }
}

int deQueue()
{
    if (isEmpty())
    {
        cout << "The Queue is empty" << endl;
    }
    else
    {
        int x = q[front];
        front++;
        return x;
    }
}

void printQueue()
{
    if (isEmpty())
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            cout << *(q + i) << " ";
        }
    }
}

int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    /* enQueue(60);
    enQueue(70); */
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    printQueue();
    return 0;
}