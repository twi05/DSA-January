    #include <iostream>
    #include <vector>
    #include <stack>
    #include <queue>

    class Solution
    {
    public:
        int timeRequiredToBuy(vector<int> &tickets, int k)
        {
    int time=0;
    while(1){

            for (int i = 0; i < tickets.size(); i++)
            {
                if (tickets[i] == 0)
                    continue;

                else{
                    tickets[i] -=1;
                    time++;
                    
                }

                if(tickets[k]==0){
                    return time;
                }
            }
    }
            return time;
        }
    };