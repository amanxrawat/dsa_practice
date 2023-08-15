#include<iostream>
using namespace std;
#include<vector>

int getPivot(vector<int> &nums)
{
    int size = nums.size();
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {   

        if (nums[mid] >= nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int binarySearch(vector<int> &nums, int start, int end, int target)
{   
    int mid = start + (end - start) / 2;
    while (start <= end)
    {   
        if (nums[mid] == target)
        {
            return mid;
        }
         if (target > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


int search(vector<int> &nums, int target)
{   
    int size = nums.size();    
    int pivot = getPivot(nums);

    if (target >= nums[pivot] && target <= nums[size-1])
    {
        return binarySearch(nums,pivot,size-1,target);
    }
    else
    {
        return binarySearch(nums,0,pivot-1,target);
    }
}

int main(){
    vector<int> nums={1,3};
    int ans=search(nums,1);
    cout<<"answer is::";
    cout<<ans;
    return 0;
}