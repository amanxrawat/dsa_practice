// homework problem

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> mp;
    for (auto a : arr)
        mp[a]++;
        
    vector<int> temp;
    for(auto a: mp){
        temp.push_back(a.second);
    }
    
    
    sort(temp.begin() , temp.end());
    for(int i = 0 ; i< temp.size()-1; i++){
        if(temp[i]==temp[i+1])return false;
    }
    return true;
    }
};

int main(){

    Solution sol;
    vector<int> arr ={1,2,2,1,1,3};
    cout<<sol.uniqueOccurrences(arr);

    return 0;
}