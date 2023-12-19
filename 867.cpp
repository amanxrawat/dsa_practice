#include<iostream>
#include<vector>
using namespace std;

// only applicable to square matrix
 vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int temp;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0 ; j< matrix[0].size() ; j++){
                if(j<=i){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
                }
            }
        }

    return matrix;
}


class Solution {
 public:
  vector<vector<int>> transpose(vector<vector<int>>& A) {
    vector<vector<int>> ans(A[0].size(), vector<int>(A.size()));

    for (int i = 0; i < A.size(); ++i)
      for (int j = 0; j < A[0].size(); ++j)
        ans[j][i] = A[i][j];

    return ans;
  }
};
