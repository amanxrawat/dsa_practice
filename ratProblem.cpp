#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
void possiblePath(vector<vector<int>> &m, vector<vector<int>> &visited, int srcX, int srcY, vector<string> &ans, string &path, int n)
{

    int destX = n - 1;
    int destY = n - 1;

    if (srcX == destX && srcY == destY)
    {
        ans.push_back(path);
        return;
    }

    visited[srcX][srcY] = 1;

    // up
    if ((srcY - 1 >= 0)&& (visited[srcX][srcY-1]==0)&& (m[srcX][srcY-1]==1))
    {
        char dir = 'U';
        path.push_back(dir);
        possiblePath(m, visited, srcX, srcY - 1, ans, path, n);
        path.pop_back();
        visited[srcX][srcY - 1] = 0;
    }
    // down
    if ((srcY + 1 < n) && (visited[srcX][srcY+1]==0)&& (m[srcX][srcY+1]==1))
    {
        char dir = 'D';
        path.push_back(dir);
        possiblePath(m, visited, srcX, srcY + 1, ans, path, n);
        path.pop_back();
        visited[srcX][srcY + 1] = 0;
    }
    // right
    if ((srcX + 1 < n)&& (visited[srcX+1][srcY]==0)&& (m[srcX+1][srcY]==1))
    {
        char dir = 'R';
        path.push_back(dir);
        possiblePath(m, visited, srcX + 1, srcY, ans, path, n);
        path.pop_back();
        visited[srcX + 1][srcY] = 0;
    }
    // left
    if ((srcX - 1 >= 0)&& (visited[srcX-1][srcY]==0)&& (m[srcX-1][srcY]==1))
    {
        char dir = 'L';
        path.push_back(dir);
        possiblePath(m, visited, srcX - 1, srcY, ans, path, n);
        path.pop_back();
        visited[srcX - 1][srcY] = 0;
    }
}

vector<string> path(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    int srcX = 0;
    int srcY = 0;

    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";
    possiblePath(m, visited, srcX, srcY, ans, path, n);
    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<vector<int>> nums = {{1,0,0,0},{1,1,0,1,},{1,1,0,0},{0,1,1,1}};
    vector<string> ans = path(nums,4);
    for(int i = 0; i<ans.size();i++){
        cout<<"the answer is -->"<<ans[i];
    }
    return 0;
}