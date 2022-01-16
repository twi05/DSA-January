#include<iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

bool isFull(Queue *q){
  if((q->rear +1)%q->size  == q->front ){
    return 1;
  }
  return 0;
}

void enqueue(Queue *q,int n){
        if(isFull(q)){
          cout<<"\nQueuee is Full";
          return;
        }
        q->rear = (q->rear +1)%q->size ;
        q->arr[q->rear] = n;
        cout<<"\nEnqueued value :"<<n;
}

bool isEmpty(Queue *q){
  if(q->front == q->rear){
    return 1;
  }
  return 0;
}

int dequeue(Queue *q){
  if(isEmpty(q)){
    cout<<"\nQueue is Empty";
    return -1;
  }
  
  q->front =  (q->front +1)%q->size;
  int a = q->arr[q->front];
  return a;
}

int main(){
  Queue q;
    q.front =q.rear = 0;
    q.size = 4;
    q.arr = new int[q.size];

    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    cout<<"\nDequued val is "<<dequeue(&q);
    cout<<"\nDequued val is "<<dequeue(&q);
    enqueue(&q,6);
    enqueue(&q,6);
    enqueue(&q,6);
return 0;
}