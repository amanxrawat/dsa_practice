#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProductDifference(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int last_index = nums.size()-1;
    return(nums[last_index]* nums[last_index -1 ])-(nums[0]*nums[1]);
}

int main(){
    
    return 0;
}