#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(), m = img[0].size();
        vector<vector<int>> ansImg(n, vector<int> (m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int sum = img[i][j];
                int cnt = 1;
                if (i > 0 && j > 0) {
                    cnt++;
                    sum += img[i - 1][j - 1];
                }
                if (i > 0) {
                    cnt++;
                    sum += img[i - 1][j];
                }
                if (i > 0 && j < m - 1) {
                    cnt++;
                    sum += img[i - 1][j + 1];
                }
                if (j < m - 1) {
                    cnt++;
                    sum += img[i][j + 1];
                }
                if (i < n - 1 && j < m - 1) {
                    cnt++;
                    sum += img[i + 1][j + 1];
                }
                if (i < n - 1) {
                    cnt++;
                    sum += img[i + 1][j];
                }
                if (i < n - 1 && j > 0) {
                    cnt++;
                    sum += img[i + 1][j - 1];
                }
                if (j > 0) {
                    cnt++;
                    sum += img[i][j - 1];
                }
                ansImg[i][j] = int(sum / cnt);
            }
        }
        return ansImg;
    }
};

int main(){
  
    return 0;
}