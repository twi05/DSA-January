#include <iostream>
using namespace std;
struct stack
{
    int top;
    int size;
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

bool isFull(stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(stack *s, char ch)
{
    if (isFull(s))
    {
        cout << "Stack Overflow";
        return;
    }
    s->top++;
    s->str[s->top] = ch;
}
char pop(stack *s)
{
    char x = s->str[s->top];
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
        cout << s->str[i] << "\t";
    }
}

char peak(stack *s, int pos)
{
    int arrIndex = s->top - pos + 1;
    if (arrIndex < 0)
    {
        cout << " Pos is Invalid";
        return -1;
    }
    return s->str[arrIndex];
}

char stackTop(stack *s)
{
    return s->str[s->top];
}
char stackBottom(stack *s)
{
    return s->str[0];
}

bool isOperand(char ch)
{
    if (ch == '/' || ch == '*' || ch == '+' || ch == '-')
    {
        return true;
    }
    return false;
}

int pres(char ch)

{
    if (ch == '/' || ch == '*')
    {
        return 3;
    }

    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
        return 0;
}
string infixToPostfix(string inf)
{
    char ch;
    int i = 0; // For main string infinix
    int j = 0; // for ans Postfix
    stack *s = new stack;
    s->size = inf.length() + 1;
    s->top = -1;

    string postfix="";

    while (!inf.empty())
    {
        ch = inf.at(i);
        if (!isOperand(ch))
        {
            postfix+= ch;
            // postfix[j]= ch;
            j++;
            i++;
        }
        else
        {
            if (pres(ch) > pres(stackTop(s)))
            {
                push(s, ch);
            }
            else
            {
                // postfix[j] = pop(s);
                postfix+= pop(s);
                j++;
            }
        }

    }

    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }

    return postfix;
}
int main()
{

    string infix = "6+5*2+2";
    cout << "Postfix is" << infixToPostfix(infix);

    return 0;
}