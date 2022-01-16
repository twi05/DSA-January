#include <iostream>
#include <queue>
using namespace std;

void reverseQueue(queue<int> &q)
{
    int a;

    if (q.empty())
    {
        return;
    }
    else
    {
        a = q.front();
        q.pop();

        reverseQueue(q);
        q.push(a);
    }
}
void printQueue(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
int main()

{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    // q.push(45);
    // q.push(85);
    // q.push(92);
    // q.push(58);
    // q.push(80);
    // q.push(90);
    // q.push(100);
    reverseQueue(q);
    printQueue(q);

    return 0;
}