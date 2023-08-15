#include<iostream>
using namespace std;
#include<vector>
void rotateArray(vector<int> &nums,int k){
    int size = nums.size();
    vector<int> temp(size);
    for(int i = 0; i<size; i++){
        temp[(i+k)%size] = nums[i];
    }

    nums=temp;
}
int main()
{
    
    return 0;
}