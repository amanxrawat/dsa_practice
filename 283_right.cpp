#include<iostream>
using namespace std;
#include<vector>


void moveZeroes(vector<int>& nums){
    int i=0,j=1;
    int size=nums.size();
    while(j<size){
        if(nums[i]==0&&nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }

    }
}


void printVector(vector<int>&nums){
    for(int i = 0;i<nums.size();i++){
        cout<<" "<<nums[i];
    }
}


int main()
{
    vector<int> nums ={0,1,0,3,12};
    moveZeroes(nums);
    printVector(nums);
    
    return 0;
}