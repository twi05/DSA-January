#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
    queue<int> q1, q2;
    int size;

public:
    MyStack()
    {
        size = 0;
    }

    void push(int x)
    {
        int z;
        q2.push(x);

        while (!q1.empty())
        {

            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }

    int pop()
    {
        if (q1.empty())
        {
            return -1;
        }
        int toPop = q1.front();
        q1.pop();
        return toPop;
    }

    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }

    bool empty()
    {
        if (q1.empty())
        {
            return 1;
        }
        return 0;
    }
};
int main()
{

    return 0;
}
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */