#include <iostream>
using namespace std;

struct LL
{
    int val;
    LL *next;
};
struct stack
{
    LL *top;

    int size;
};

bool isEmpty(stack *s)
{
    if (s->top == NULL)
    {
        return true;
    }
    return false;
}

bool isFull(stack *s)
{
    LL *new_node = new LL;
    if (new_node == NULL)
    {
        return true;
    }
    else
        return false;
}
LL *push(stack *s, LL *top, int val)
{
    LL *new_node = new LL;
    if (new_node == NULL)
    {
        cout << "Stack Overflow";
        return top;
    }
    else
    {
        new_node->val = val;
        if (top == NULL)
        {
            new_node->next = NULL;
        }
        else
        {
            new_node->next = top;
        }
        top = new_node;
        return top;
    }
}

LL *pop(stack **s)
{
    if (isEmpty(*s))
    {
        printf("Stack is Underflow");
        return (*s)->top;
    }
    else
    {
        LL *ptr = (*s)->top;
        cout << "\n"
             << ptr->val << " is Popped from the LL";
        (*s)->size--;
        ptr = ptr->next;
        return ptr;
    }
}

void traverseLL(LL *top)
{
    cout << "\nElements on stack s are : ";

    while (top != NULL)
    {
        cout << top->val;
        top = top->next;
    }
}

void peek(stack *s, int pos)
{
    LL *ptr = new LL;
    ptr = s->top;

    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        cout << "Value at position " << pos << " is " << ptr->val;
    }
    else 
    cout<<"Index is Invalid";
}



int main()
{

    stack *s = new stack;
    s->top = NULL;

    s->top = push(s, s->top, 6);
    s->top = push(s, s->top, 7);
    s->top = push(s, s->top, 8);
    if (isFull(s))
    {
        cout << "Stack is Full";
    }
    else
        cout << "Stack is NOT Full";
    s->top = pop(&s);

    traverseLL(s->top);

    stack *t = new stack;
    t->top = NULL;
    cout << "\nStack 2 is " << isEmpty(t);

    return 0;
}