#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    void solve(stack<int> & s , int n , int &count){
        if(count == n/2){
            s.pop();
            return;
        }
        
        int top = s.top();
        s.pop();
        count++;
        solve(s,n,count);
        s.push(top);
        return;
        
    }
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int count = 0;
        solve(s , sizeOfStack , count);
        
    }
};