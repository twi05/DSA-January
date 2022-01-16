#include <iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return false;
}
int isFull(stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(stack *s, int n)
{
    if (isFull(s))
    {
        cout << "Stack Overflow";
        return;
    }
    s->top++;
    s->arr[s->top] = n;
}
void pop(stack *s)
{
    if (isEmpty(s))
    {
        cout << "Stack Underflow";
        return;
    }
    cout << "Popped value is " << s->arr[s->top];
    s->top--;
}

void display(stack *s)
{
    if (isEmpty(s))
    {
        cout << "\nNo elements in Stack exists";
        return;
    }
    cout << "Display array: ";
    for (int i = 0; i <= s->top; i++)
    {
        cout << s->arr[i] << "\t";
    }
}

int peak(stack *s, int pos)
{
    int arrIndex = s->top - pos + 1;
    if ( arrIndex < 0)
    {
        cout << " Pos is Invalid";
        return -1;
    }
    return s->arr[arrIndex];
}

int stackTop(stack *s){
    return s->arr[s->top];
}
int stackfBottom(stack *s){
    return s->arr[0];
}
int main()
{
    stack *s = new stack;
    s->size = 5;
    s->arr = new int[s->size];
    s->top = -1;


    // if (isEmpty(s))
    // {
    //     cout << "Stack is Empty";
    // }
    // else
    // {
    //     cout << "Stack is Full";
    // }

    // cout<<s->arr[0];
    push(s, 4);
    push(s, 5);
    push(s, 6);
    pop(s);
    // pop(s);
    // pop(s);
    // display(s);


    cout<<"\nPeak val is " << peak(s,5);

    // if(isFull(s)){
    //     cout<<"Stack is Empty";
    // }
    // else{
    //     cout<<"Stack is Full";
    // }.

    cout<<"Stack top is "<<stackTop(s);
    cout<<"Stack bottom is "<<stackfBottom(s);

    return 0;
}