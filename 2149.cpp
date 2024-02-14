#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> positive;
        queue<int> negative;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>0)positive.push(nums[i]);
            else negative.push(nums[i]);
        }
        nums.clear();
        while(!positive.empty()){
            nums.push_back(positive.front());
            positive.pop();
            nums.push_back(negative.front());
            negative.pop();
        }

        return nums;
    }
};


int main(){

    return 0;
}