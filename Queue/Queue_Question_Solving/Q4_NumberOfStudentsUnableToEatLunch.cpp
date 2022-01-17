#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        queue<int> q;
        for (int i = 0; i < students.size(); i++)
        {
            q.push(students[i]);
        }
        stack<int> s;
        for (int i = sandwiches.size()-1; i >=0 ; i--)
        {
            s.push(sandwiches[i]);
        }

            int repeat = 0, eaten = 0;
            int n = q.size();
            while (repeat < n && !s.empty() && !q.empty())
            {

                if (s.top() == q.front())
            {
                s.pop();
                q.pop();
                repeat = 0;
                eaten++;
            }
            else
            {
                q.push(q.front());
                q.pop();
                repeat++;
            }
        }
        return n - eaten;
    }
};
