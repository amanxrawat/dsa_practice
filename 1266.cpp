#include <iostream>
#include <vector>
#include<cmath>
#include<algorithm>
// #include<bits/stdc++.h>


using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>> &points){
    int time = 0;
    for(int i = 0 ; i< points.size() -1 ; i++){
        max(abs(points[i+1][0]-points[i][0]),abs(points[i+1][1]-points[i][1]));
    }
    return time;
}