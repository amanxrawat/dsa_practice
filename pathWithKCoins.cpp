#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    
    vector<int> ans;
    
    void solve(int n , int k , vector<vector<int>>&arr , int i , int j, int val){
        
        val = val+arr[i][j];
        
        if(val==k && i==n-1 && j==n-1){
            ans.push_back(1);
            return ;
        }
        
        if(val>k)return;
        
        // right move 
        if(i<n && j+1<n)
            solve(n,k,arr,i,j+1,val);
        
        
        // down move
        if(i+1<n && j<n)
            solve(n,k,arr,i+1,j,val);
        
        return; 
    }
    
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        
        int val = 0;
        int i = 0;
        int j = 0;
        ans.clear();
        solve(n,k,arr,i,j,val);
        
        return ans.size();
    }
};
