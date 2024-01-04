#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        unordered_map<int, int> mp;
        for (int i = 0 ; i<N ; i++){
            mp[arr[i]]++;
        
        }
        
        for(auto i : mp){
            if(i.second == 1){
                return i.first;
            }
        }
    }
};