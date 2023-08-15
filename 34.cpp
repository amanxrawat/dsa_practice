#include <iostream>
using namespace std;
#include <vector>

int firstOccurance(vector<int> &nums,int target){
    int size = nums.size();
    int start = 0;
    int end = size - 1;
    int ans=-1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if(nums[mid]==target){
            ans=mid;
            end=mid-1;
            // start=mid+1;
        }
        else if(target>nums[mid]){
            start=mid+1;
            // ans.push_back(mid);
        }
        else if(target<nums[mid]){
            end=mid-1;
        }    
    }
    return ans;
}
int lastcOccurance(vector<int> &nums,int target){
    int size = nums.size();
    int start = 0;
    int end = size - 1;
    int ans=-1;
    while (start <= end)
    {
    int mid = start + (end - start) / 2;
        if(nums[mid]==target){
            ans=mid;
            // end=mid-1;
            start=mid+1;
        }
        else if(target>nums[mid]){
            start=mid+1;
            // ans.push_back(mid);
        }
        else if(target<nums[mid]){
            end=mid-1;
        }    
    // int mid = start + (end - start) / 2;
    }
    return ans;
}
vector<int> searchRange(vector<int> &nums, int target)
{
   vector<int> ans={firstOccurance(nums,target),lastcOccurance(nums,target)};
//    for(int i=0;i<ans.size();i++){
//     cout<<ans[i];
//    }
   return ans;
}
int main()
{
    vector<int> nums ={1,2,3,7,4,5,6};
    searchRange(nums,2);

    return 0;
}

// great solution
/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int endingPosition = lower_bound(nums.begin(), nums.end(), target+1) - nums.begin() - 1;
        if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endingPosition};
        }
        return {-1, -1};
    }
};
*/