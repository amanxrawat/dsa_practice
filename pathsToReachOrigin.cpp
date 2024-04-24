#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
 int solve(int x,int y, vector<vector<int>>&dp){
        if(x==0 && y==0){
            return 1;
        }
        if(x<0||y<0){
            return 0;
        }
        if(dp[x][y]!=-1)return dp[x][y];
        return dp[x][y]=(solve(x-1,y,dp)+solve(x,y-1,dp))%(1000000007);
    }
    
    int ways(int x, int y)
    {
        //code here.
       vector<vector<int>>dp(x+2,vector<int>(y+2,-1));
        return solve(x,y,dp);
    }

};

int main(){
   return 0;
}