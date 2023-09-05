#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
// other than that we can first merge simply after m value of nums1 and then sort the resulting array;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=0,j=0;
    int temp;
    while( j<n){
        if(nums1[i]==0){
            nums1[i]=nums2[j];
            j++;
            i++;
        }
        else if(j==0)j++;
        else if(nums1[i]<nums2[j]||nums1[i]==nums2[j]){
            i++;
            // continue;
        }
        
        else{
            // temp = nums1[i];
            // nums1[i]=nums2[j];
            // nums2[j]=temp;
            swap(nums1[i],nums2[j]);
            // j++;
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
    int m,n;
    vector<int>nums1 = {1,2,3,0,0,0}; 
    m = 3; 
    vector<int> nums2 = {2,5,6} ;
    n = 3;
    merge(nums1,m,nums2,n);
    printVector(nums1);
    return 0;
}