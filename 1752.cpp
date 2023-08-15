//rotated sorted array
#include<iostream>
using namespace std;
#include<vector>

bool check(vector<int>& nums) {
    int count =0;
    for(int i= 0; i<nums.size() ;i++){
        if(nums[i]>nums[(i+1)%nums.size()]){
            count++;
        }
    }
    if(count<2){
        return true;
    }
    return false;
}

int main()
{
    
    return 0;
}