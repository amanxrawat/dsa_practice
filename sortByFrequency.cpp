#include<bits/stdc++.h>
using namespace std;

vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        
        sort(arr.begin(), arr.end(), [&](int i, int j) {
            if (mp[i] != mp[j]) {
                return mp[i] > mp[j];
            }
            return i < j;
        });
        
        return arr;
    }