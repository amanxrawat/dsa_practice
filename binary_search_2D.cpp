#include<iostream>
using namespace std;
#include<vector>
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int column = matrix[0].size();
    int start = 0 ;
    int end = row*column -1;
    int mid = start + (end- start)/2;
    while(start <= end){
        int value = matrix[mid/column][mid%column];
        if(value == target){
            return true;
        }
        if(value>target){
            start = mid+1;
        }
        else{
            end = mid-1 ;
        }
        mid = start + (end-start)/2;
    }
    return false;
}



int main()
{
    
    return 0;
}