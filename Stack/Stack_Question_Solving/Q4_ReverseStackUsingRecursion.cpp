#include <iostream>

using namespace std;

struct stack
{
    int top;
    int size;
    char *arr;
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

void push(stack *s, char n)
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
    // cout << "Popped value is " << s->arr[s->top];
    int x = s->arr[s->top];
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

void insertBottom(stack *s, char top)
{
    char a = stackTop(s);
    if (isEmpty(s))
    {
        push(s, top);
        return;
    }
    else
    {
        pop(s);
        insertBottom(s, top);
    }
    push(s, a);
}

void RevStack(stack *s)
{
    if (isEmpty(s))
    {
        return;
    }
    char top = stackTop(s);
    pop(s);
    RevStack(s);
    insertBottom(s, top);
}

int main()
{

    stack *s = new stack;
    // Input the original stack
    s->size = 5;
    s->arr = new char[s->size];
    // s->arr = new string(s->size);
    s->top = -1;

    // while (cin >> x)
    push(s, 'a');
    push(s, 's');
    push(s, 'd');
    // Reverse it
    RevStack(s);

    // Print the reversed stack
    // while (!s.empty())

    display(s);

    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    return 0;
}