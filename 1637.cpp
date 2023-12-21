#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// this can be used to optimize the solution by 15 to 20 ms
// here solution is the same of the class
/*
 Solution(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
*/

int maxWidthOfVerticalArea(vector<vector<int>> &points)
{
    vector<int> sortedx;
    int width=0;
    int temp;
    for (int i = 0; i < points.size(); i++)
    {
        sortedx.push_back(points[i][0]);
    }
    sort(sortedx.begin(),sortedx.end());
    for(int j = sortedx.size()-1; j>0 ; j--){
        temp = sortedx[j]-sortedx[j-1];

        if(temp > width){
            width = temp;
        }
    }
    return width;
}

int main()
{
    return 0;
}