#include<iostream>
using namespace std;
#include<vector>
void insertionSort(vector<int> &nums){
    int size = nums.size();
    for(int i = 1; i<size; i++){
        int temp = nums[i];
        int j = i-1;
        for(; j>0; j--){
            // shift
            if(nums[j]>temp){
                nums[j+1]=nums[j];
            }
            else{
                break;
            }    
        }
    nums[j+1] = temp;
    }
}


int main()
{
    
    return 0;
}