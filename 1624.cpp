#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> value;
        int val;
        for(int i = 0 ; i<s.size(); i++){
            val = i - s.find(s[i]);
            value.push_back(val);
        }
        val = value[value.size()-1]-1;

        sort(value.begin(), value.end());
        return val;
    }
};

int main(){
    Solution sol;
    string s= "abca";
    cout<<s.rfind("a");
    cout<<sol.maxLengthBetweenEqualCharacters("abca");
    return 0;
}