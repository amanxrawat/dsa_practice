#include<bits/stdc++.h>
using namespace std;

vector<vector<vector<int>>> subIslands;
vector<vector<int>> island;


void findIsland(vector<vector<int>> &grid, int row, int col, vector<vector<int>> &visited) {
    if (row < 0 || row >= grid.size() ||
    col < 0 || col >= grid[0].size() ||
    grid[row][col] == 0 || visited[row][col] == 1) {
        return;
    }

    // Mark this cell as visited and add it to the current island
    visited[row][col] = 1;
    island.push_back({row, col});

    // Perform DFS in all four directions
    findIsland(grid, row + 1, col, visited); // Down
    findIsland(grid, row - 1, col, visited); // Up
    findIsland(grid, row, col + 1, visited); // Right
    findIsland(grid, row, col - 1, visited); // Left
}

// Function to count and store sub-islands
int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
    int count = 0;

    vector<vector<int>> visited(grid2.size(), vector<int>(grid2[0].size(), 0));

    for (int i = 0; i < grid2.size(); i++) {
        for (int j = 0; j < grid2[0].size(); j++) {
            if (grid2[i][j] == 1 && visited[i][j] == 0) {
                // Clear previous island data
                island.clear();
                
                // Find the island
                findIsland(grid2, i, j, visited);
                
                // Store the found island
                subIslands.push_back(island);
                count++;
            }
        }
    }

    // Print the sub-islands
    for (size_t i = 0; i < subIslands.size(); ++i) {
        cout << "Island " << i + 1 << ":" << endl;
        for (size_t j = 0; j < subIslands[i].size(); ++j) {
            cout << "Position " << j + 1 << ": (" << subIslands[i][j][0] << ", " << subIslands[i][j][1] << ")" << endl;
        }
        cout << endl;
    }

    return count;
}