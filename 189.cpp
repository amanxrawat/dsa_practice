#include<iostream>
using namespace std;
#include<vector>
void loopRotate(vector<int> &nums,int k){
    int size = nums.size();
    int i = 0;
    while(i<k){
        for(int j = size-1 ; j>0; j--){
            swap(nums[j],nums[j-1]);
        }
        i++;
    }
}

void printVector(vector<int>&nums){
    for(int i = 0;i<nums.size();i++){
        cout<<" "<<nums[i];
    }
}


int main()
{
    vector<int> nums ={1,2,3,4,5,6,7};
    loopRotate(nums,2);
    printVector(nums);
   

    return 0;
}