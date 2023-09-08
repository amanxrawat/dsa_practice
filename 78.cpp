#include<iostream>
using namespace std;
#include<vector>

void sets(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans ){
    if(index >= nums.size()){
        ans.push_back(output); 
        return ;
    }

    //exclude
    sets(nums,output,index+1,ans);
    // include
    int element = nums[index];
    output.push_back(element);
    sets(nums,output,index+1,ans);

}
vector<vector<int>> subsets(vector<int>& nums) {
    
    // power set
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    sets(nums,output,index,ans);  
    return ans;
}


int main()
{
    
    return 0;
}






/*Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
*/