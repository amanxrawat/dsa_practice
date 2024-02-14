#include<bits/stdc++.h>
using namespace std;

class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int range = t-3000;
        q.push(t);
        while(! (q.front()>=range)){
            q.pop();
        }
        return q.size();
    }
};

int main(){

    return 0;
}