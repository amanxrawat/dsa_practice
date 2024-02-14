#include<bits/stdc++.h>
using namespace std;


// optimized solution using the Moores voting algorithms

// sorting and returning nums[size/2]
// using map are other solution for the same problem

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int count = 0;
        int element = 0 ;
        for(int i = 0 ; i< nums.size() ; i++){
            if(count==0){
                element = nums[i];
                count++;
            }
            else if(nums[i]==element)count++;
            else count--;  
        }
        return  element;
    }
};

int main(){

    return 0;
}