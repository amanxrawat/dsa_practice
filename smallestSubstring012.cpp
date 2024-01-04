#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int smallestSubstring(string s) {
        int zeroIndex = -1;
        int oneIndex = -1;
        int twoIndex = -1;
        int minwin = s.size()+1;
        int temp ;
        int temp2 ;
        int windowsize ; 


        for(int i = 0 ; i< s.size() ; i++){
            if(s[i] == '0')
                zeroIndex = i;
            
            if(s[i] == '1')
                oneIndex = i;
            
            if(s[i] == '2')
                twoIndex = i;
            
            if( zeroIndex>-1 && oneIndex>-1 && twoIndex>-1){
                temp = max({zeroIndex,oneIndex,twoIndex});
                temp2 = min({zeroIndex,oneIndex,twoIndex});
                windowsize = temp - temp2 +1;
                minwin = min(minwin,windowsize);
            }

        }

        if(minwin > s.size()+1){
            return -1;
        }

        return minwin;
    }
};

int main(){
    return 0;
}