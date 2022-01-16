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

char pop(stack *s)
{
 
    char x = s->str[s->top];
    s->top--;
    return x;
}
bool matching(char a, char b)
{
    // if ((a == '[' && b == ']') || (a == '{' && b == '}') || (a == '(' && b == ')'))

    if (a == '(' && b == ')')
    {
        return true;
    }
    if (a == '{' && b == '}')
    {
        return true;
    }
    if (a == '[' && b == ']')
    {
        return true;
    }
    return false;
}
bool isValid(string str)
{
    stack *s = new stack;
    s->top = -1;
    s->size = 50;
    char ch, lastPoped;

    while (!str.empty())
    {
        ch = str.at(0);
        if (ch == '(' || ch == '[' || ch == '{')
        {

            push(s, ch);
        }
        if (ch == ')' || ch == ']' || ch == '}')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            lastPoped = pop(s);
            if (!matching(lastPoped, ch))
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
    // string str = "[7-(8*(3){+}1{1}+(12))]";

    // string str = "[6-4]((8){(9-8)})";
    // string str = "()";
    string str = "";

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