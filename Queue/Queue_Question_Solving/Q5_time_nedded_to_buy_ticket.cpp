#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        queue<int> q;
        for (int i = 0; i < q.size(); i++)
        {
            q.push(tickets[i]);
        }
        int t = 0;

        while (1)
        {
            if (k == 0 && q.front() - 1 == 0)
            {
                t++;
                break;
            }

            if (q.front() - 1 == 0)
            {
                q.pop();
                k--;
                t++;
            }
            else
            {
                q.push(q.front() - 1);
                q.pop();
                k--;
                t++;
            }
            if (k == -1)
            {
                k = q.size() - 1;
            }
        }
        return t;
    }
};
