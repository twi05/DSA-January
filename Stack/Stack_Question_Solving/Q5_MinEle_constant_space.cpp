#include <iostream>

using namespace std;


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

void push(stack *s, stack *aux, int n)
{
    if (isFull(s))
    {
        cout << "Stack Overflow";
        return;
    }
    s->top++;
    int aux_top = aux->arr[aux->top];
    aux->top++;
    s->arr[s->top] = n;
    if (n < aux_top)
    {
        aux->arr[aux->top] = n;
    }
    else
    {
        aux->arr[aux->top] = aux_top;
    }
}
int pop(stack *s, stack *aux)
{
    if (isEmpty(s))
    {
        cout << "Stack Underflow";
        return -50000;
    }
    // cout << "Popped value is " << s->arr[s->top];
    int x = s->arr[s->top];
    s->top--;

    return x;
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
    if (arrIndex < 0)
    {
        cout << " Pos is Invalid";
        return -1;
    }
    return s->arr[arrIndex];
}

int stackTop(stack *s)
{
    return s->arr[s->top];
}
int stackfBottom(stack *s)
{
    return s->arr[0];
}

int getMin(stack *auxial)
{
    return auxial->arr[auxial->top];
}
int main()
{

    stack *actual = new stack;
    stack *auxial = new stack;
    // Input the original stack
    actual->size = 5;
    actual->arr = new int[actual->size];
    // s->arr = new string(s->size);
    actual->top = -1;
    auxial->size = 5;
    auxial->arr = new int[auxial->size];
    // s->arr = new string(s->size);
    auxial->top = -1;
    // while (cin >> x)
    push(actual, auxial, 1);
    push(actual, auxial, 2);
    push(actual, auxial, -5);
    push(actual, auxial, 3);
    // Reverse it
    cout << getMin(auxial);

    // Print the reversed stack
    // while (!s.empty())

    // display(actual);
    // display(auxial);

    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    return 0;
}