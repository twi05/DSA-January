#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

bool isFull_queue(Queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }

    return 0;
}
bool isEmpty_queue(Queue *q)
{
    if (q->rear == q->front)
    {
        q->front = 0;
        q->rear = 0;
        return 1;
    }

    return 0;
}
void enqueue(Queue *q, int n)
{
    if (isFull_queue(q))
    {
        cout << "Queue Overflow";
        return;
    }

    q->rear++;
    q->arr[q->rear] = n;
}
int dequeue(Queue *q)
{
    if (isEmpty_queue(q))
    {
        cout << "No element to Dequeue";
        return -10;
    }
    int ele = -1;
    q->front++;
    ele = q->arr[q->front];

    return ele;
}
int main()
{
    Queue q;
    q.front = -1;
    q.rear = -1;
    q.size = 10;
    q.arr = new int[q.size];

    enqueue(&q, 5);

    cout << q.rear;
    cout << "Ele dequeue is :" << dequeue(&q);
    return 0;
}