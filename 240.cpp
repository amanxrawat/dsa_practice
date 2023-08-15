// search in a 2D matrix II
#include<iostream>
using namespace std;
#include<vector>
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int column = matrix[0].size();

    int rowIndex = 0;
    int colIndex = column-1;
    while(rowIndex<row && colIndex>=0){
        int element = matrix[rowIndex][colIndex];
        if(element == target){
            return true;
        }
        if(element<target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return false;
}
int main()
{
    
    return 0;
}