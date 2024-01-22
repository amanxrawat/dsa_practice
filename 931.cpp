#include <bits/stdc++.h>
using namespace std;
// (row, col) will be (row + 1, col - 1), (row + 1, col), or (row + 1, col + 1).

class Solution
{
private:
    int solve(vector<vector<int>> &matrix, int row, int col, int maxcolsize)
    {
        // Base case: If we are at the last row, return the value in that cell
        if (row == matrix.size() - 1)
        {
            return matrix[row][col];
        }

        int sum = matrix[row][col];

        // Check the three possible directions for the next row
        int leftSum = (col - 1 >= 0) ? solve(matrix, row + 1, col - 1, maxcolsize) : INT_MAX;
        int straightSum = solve(matrix, row + 1, col, maxcolsize);
        int rightSum = (col + 1 < maxcolsize) ? solve(matrix, row + 1, col + 1, maxcolsize) : INT_MAX;

        // Choose the minimum sum among the three directions
        sum += min({leftSum, straightSum, rightSum});

        return sum;
    }

public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int maxcolsize = matrix[0].size();
        int minSum = INT_MAX;

        // Iterate over the first row and find the minimum falling path sum for each starting column
        for (int i = 0; i < maxcolsize; i++)
        {
            int currentSum = solve(matrix, 0, i, maxcolsize);
            minSum = min(minSum, currentSum);
        }

        return minSum;
    }
};


int main()
{

    return 0;
}