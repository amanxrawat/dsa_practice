#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
    unordered_map<int, int> mp;
    int cnt = 0;
    for (auto a : s)
        mp[a]++;
    
    for(auto b : t)
        mp[b]--;

    for (auto i = mp.begin(); i != mp.end(); i++){
        if(i->second <0){
            continue;
        }
        cnt += i->second;
    }

    return cnt;
        

    }    
};

int main(){
    Solution sol;
    cout<<sol.minSteps("bab", "aba");
    return 0;
}