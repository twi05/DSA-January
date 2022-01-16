#include<iostream>
using namespace std;

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
        return ;
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
int main(){

return 0;
}