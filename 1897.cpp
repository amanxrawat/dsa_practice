#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int alpha[26] = {0};
        int size = words.size();

        for(int i = 0 ; i<words.size() ; i++){
            for(int j = 0 ; j< words[i].size() ; j++){
                int index = words[i][j] - 'a';
                alpha[index]++;
            }
        }

        for(int i = 0 ; i<26 ; i++){
            if(alpha[i] !=0 && (alpha[i]%size >0) ){
                return false;

            }
        }
        return true;
    }
};


int main(){
    Solution sol;
    vector<string> words ={"ab","a"};
    cout<<sol.makeEqual(words);

    return 0 ;
}