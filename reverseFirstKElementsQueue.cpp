#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> temp;
    
        for (int i = 0; i < k; i++) {
            int a = q.front();
            q.pop();
            temp.push(a);
        }
    
    
        queue<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push(temp.top());
            temp.pop();
        }
    
        while (!q.empty()) {
            ans.push(q.front());
            q.pop();
        }
    
        return ans;
    }
};