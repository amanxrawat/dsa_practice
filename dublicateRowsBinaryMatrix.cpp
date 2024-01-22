#include<bits/stdc++.h>
using namespace std;

class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        vector<int> ans ;
        for(int i = 0 ; i<M ; i++){
            for(int j = i+1 ; j < M ; j++){
                if(matrix[i]== matrix[j]){
                    if(find(ans.begin(), ans.end(), j) != ans.end() )
                        continue;
                    ans.push_back(j);
                }
            }
        }
        return ans;
    } 
};

int main(){

    Solution sol;
    vector<vector<int>> num =  {{ 1, 0, 0},
                                { 1, 0, 0},
                                { 0, 0, 0},
                                { 0, 0, 0}};
    vector<int> ans  = sol.repeatedRows(num,4,3);
    


    return 0;
}