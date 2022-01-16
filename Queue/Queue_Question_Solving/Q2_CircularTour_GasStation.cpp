#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int start = 0, n = gas.size();
    while (start != n)
    {
        int pos = start, currGas = gas[pos];

        if (currGas >= cost[pos])
        {
            currGas -= cost[pos];
            pos = (pos + 1) % n;
            cout << "T";
            while (currGas + gas[pos] >= cost[pos])

            {
                currGas = currGas + gas[pos] - cost[pos];
                if (pos == start)
                {
                    return start;
                }

                pos = (pos + 1) % n;
                if (pos == start)
                {
                    return start;
                }
            }
        }
        start++;
    }
    return -1;
}
int main()
{
    // vector<int> gas = { 2};
    // vector<int> cost = {1};
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    cout << canCompleteCircuit(gas, cost);
    return 0;
}