#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int numSpecial(vector<vector<int>> &mat){
        int specialCount = 0;
        for (int i = 0; i < mat.size(); i++){
            for (int j = 0; j < mat[i].size(); j++){
                if(mat[i][j]==1){
                    if(special(mat, i , j)){
                        specialCount++;
                        break;
                    }
                }
               
            }
        }
        
        return specialCount;
    }

private:
    bool special(vector<vector<int>> &mat, int row, int column){
        // row check
        for (int i = 0; i < mat[row].size(); i++){
            if (mat[row][i] != 0 ){
                if(i==column){
                    continue;
                }
                return false;
            }
        }

        // column check
        for (int j = 0; j < mat.size(); j++){
            if (mat[j][column] != 0 ){
                if(j == row){
                    continue;
                }
                return false;
            }
        }

        return true;
    }
};

int main(){
    Solution sol ; 
    vector<vector<int>> mat = {{1,0,0},{0,0,1},{1,0,0}};
    cout<<sol.numSpecial(mat);


    return 0;
}