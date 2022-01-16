#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    string str;
};

bool isEmpty(stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}
void push(stack *s, char ch)
{
    s->top++;
    s->str[s->top] = ch;
}

bool pop(stack *s)
{
    if (isEmpty(s))
    {
        return false;
    }
    s->top--;
    return true;
}
bool isValid(string str)
{
    stack *s = new stack;
    s->top = -1;
    s->size = 50;
    char ch;
    while (!str.empty())
    {
        ch = str.at(0);

        if (ch == '(')
        {
            push(s, ch);
        }
        if (ch == ')')
        {
            if (!pop(s))
            {
                return 0;
            }
        }

        str = str.substr(1);
    }

    if (isEmpty(s))
    {
        return 1;
    }
    return 0;
}
int main()
{
    string str = "7-(8*(3*9)+11+12))-(8";

    if (isValid(str))
    {
        cout << "Expression is Valid";
    }
    else
    {
        cout << "Expression is NOT valid";
    }
    return 0;
}