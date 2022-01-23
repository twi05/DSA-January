#include <iostream>
using namespace std;

class Solution
{
public:
    int findTheWinner(int n, int k)
    {

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = 1;
        }

        int count = 0;
        while (count != n - 1)
        {
            for(int i=0;i<k;i++){

            
            if (arr[i] == 0)
            {
                continue;
            }
            count++;
            }
        }
    }
};

int main()
{

    return 0;
}