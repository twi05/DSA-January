#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
    queue<int> q;
    

public:
    MyStack(){};

    void push(int x)
    {
        int size= q.size();;
        q.push(x);

       for(int i=0;i<size;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        if (q.empty())
        {
            return -1;
        }
        int toPop = q.front();
        q.pop();
      
        return toPop;
    }

    int top()
    {
        if (q.empty())
            return -1;
        return q.front();
    }

    bool empty()
    {
        if (q.empty())
        {
            return 1;
        }
        return 0;
    }
};