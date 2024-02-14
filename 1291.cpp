#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> numbers;
        int val = 0;
        for(int i = 1 ; i <= 9 ; i++){
            val = i;
            for(int j = i+1 ;j<=9;j++){
                val = val*10 +j;
                numbers.push_back(val);
            }
        }
        vector<int> ans;
        for(int i = 0 ;i< numbers.size();i++){
            if( numbers[i]<=high && numbers[i]>=low){
                ans.push_back(numbers[i]);
            }
        }

        return ans;
    }
};

vector<int> generateNum(){
    vector<int> numbers;
    int val = 0;
        for(int i = 1 ; i <= 9 ; i++){
            val = i;
            for(int j = i+1 ;j<=9;j++){
                val = val*10 +j;
                numbers.push_back(val);
            }
        }
        return numbers;
}

int main(){
    vector<int> ans = generateNum();
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}