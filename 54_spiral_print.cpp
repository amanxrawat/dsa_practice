#include<iostream>
using namespace std;
#include<vector>
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;

    int count = 0;
    int total = row*col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row -1; 
    int endingCol = col -1;

    while(count<total){
        
        // printing the top row
        for(int index = startingCol; count<total && index <= endingCol ;index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //printing the right column
        for(int index = startingRow; count<total && index <= endingRow  ;index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // printing the bottom row
        for(int index = endingCol; count<total &&index <= startingCol ;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // printing the left column
        for(int index = endingRow; count<total && index <= startingRow  ;index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;

    }
    return ans;
}


int main()
{
    
    return 0;
}