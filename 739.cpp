#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

//  Time Limit Exceeded

    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans;
        for(int i = 0  ; i< temp.size(); i++){
            ans.push_back(0);
            for(int j = i ; j < temp.size() ; j++){
                if(temp[j]>temp[i]){
                    ans[i]= j-i;
                    break;
                }
            }
        }
        return ans;
    }

    
};

int main(){
    return 0;
}