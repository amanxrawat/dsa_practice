#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int maxDepth(string s) {
        int maxP = 0 , size = s.size(),number = 0;
        for(int i = 0 ; i< size ; i++){
            if(s[i]=='(')number++;
            if(s[i]==')')number--;
            maxP = max(maxP,number);
        }

        return maxP;
    }
};

int main(){

    return 0;
}