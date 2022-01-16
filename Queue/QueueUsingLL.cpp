#include <iostream>
using namespace std;

struct LL
{
    int val;
    LL *next;
};
struct Queue
{
    LL *rear;
    LL *front;
    int size;
};

void enqueue(Queue *q, int val)
{
    LL *new_node = new LL;

    if (new_node == NULL)
    {
        cout << "Queue is Full";
    }
    else
    {
        new_node->val = val;
        new_node->next = NULL;

        if (q->front == NULL)
        {
            q->front = new_node;
            q->rear = new_node;
        }
        else
        {
            q->rear = new_node;
        }
        q->size++;
    }
}

void dequeue(Queue *q)
{
    if (q->front == NULL)
    {
        cout << "Queue is Empty";
    }
    else
    {
        LL *ptr = q->front;
        q->front = q->front->next;
        cout << "Dequeue value is: " << ptr->val;
        delete ptr;
    }
}
int main()
{

    Queue *q = new Queue;
    q->front = q->rear =NULL;
    enqueue(q, 6);
    enqueue(q, 6);
    enqueue(q, 6);
    enqueue(q, 6);

    dequeue(q);

    return 0;
}