#include <iostream>
#include <stack>

using namespace std;
int main()
{

    stack<int> stack;
    // Input the original stack
    int x;
    
    while (cin >> x) // Note: u have to type \0 or NULL for the stack input to stop.
        stack.push(x);
    
    while (!stack.empty())
    {
        cout << stack.top() << "\t";
        stack.pop();
    }

    return 0;
}