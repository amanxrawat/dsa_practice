#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    Solution(){
        std::ios_base::sync_with_stdio(false);
     std::cin.tie(nullptr);
     std::cout.tie(nullptr);
    }
    int maxArea(vector<int>& height) {
        int start = 0 ;
        int end = height.size()-1;
        int maxWater = 0;
        int currentWater;
        while(start<end){
            currentWater = (end-start)*min(height[start],height[end]);
            maxWater = max(maxWater,currentWater);

            // if(height[start+1]>height[start])start++;
            if(height[start]<height[end])start++;
            else if( height[start]>height[end])end--;
            else{
                start++;
                end--;;
            }
        }
        return maxWater;
    }
};