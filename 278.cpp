#include<bits/stdc++.h>
using namespace std;

// Not actual api call which was used in the leetcode 
bool isBadVersion(int a){
    return false;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int firstBad = -1;
        int start = 0 , end = n;
        int mid = start + (end- start)/2;
        while(start<=end){
            if(isBadVersion(mid)){
                firstBad = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return firstBad;
        
    }
};


int main(){

    return 0;
}