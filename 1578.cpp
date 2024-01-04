#include <bits/stdc++.h>
using namespace std;
/*
int minCost(string colors, vector<int> &neededTime)
{
    int cost = 0;
    for(int i = 0 ; i< colors.size()-1; i++){
        if(colors[i]==colors[i+1]){
            cost = cost + min(neededTime[i],neededTime[i+1]);
        }
    }
 
   return cost;
}
*/

int minCost(string colors, vector<int> &neededTime)
{
        int prev = 0;
        int ans = 0;
        for(int i = 1; i < colors.size(); i++){
            if(colors[prev] != colors[i]){
                prev = i;
            }
            else{
                if(neededTime[prev] < neededTime[i]){
                    ans += neededTime[prev];
                    prev=i;
                }
                else{
                    ans += neededTime[i];
                }
            }
        }
        return ans;
    }


int main()
{
    vector<int> neededTime = {1, 2, 3, 4, 1};
    string colours = "aabaa";
    cout<<minCost(colours,neededTime);
    // colours.erase(0, 1);
    // cout << colours;
    return 0;
}