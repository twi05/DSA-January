#include<iostream>
#include<queue>

using namespace std;
class RecentCounter {
public:
    
    queue<float>q;
    int counter;    
    RecentCounter() {
        counter=0;  
    }
    
    int ping(int t) {
        q.push(t);
        counter=0;
        while(q.front() >= t-3000 && q.front()<=t){
            counter++;
        }
        return counter;
    }
};

int arr[]



int main(){

return 0;
}



/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */