#include <iostream>
using namespace std;
#include<vector>

void solve(vector<vector<int>> &ans,vector<int> nums,int index){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i = index ; i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve(ans,nums,index+1);
        swap(nums[index],nums[i]);
    }

}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(ans,nums,index);

    return ans;
}

int main()
{

    return 0;
}

/*Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/