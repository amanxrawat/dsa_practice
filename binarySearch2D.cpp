#include<bits/stdc++.h>
using namespace std;

bool binarySearch2DMatrix(vector<vector<int> > &mat ,int n , int element){
	    
	    pair<int,int> start;
	    pair<int,int> end;
        
        start=make_pair(0,0);
        end=make_pair(n-1,n-1);
        
        pair<int,int> mid ;
        
        
        while(start.first <= end.first && start.second <= end.second){
            
            mid=make_pair((start.first+end.first)/2,(start.second+end.second)/2);

            if(mat[mid.first][mid.second]==element)return true;
            
            if(mat[mid.first][mid.second]>element){
                end.first=mid.first-1;
                end.second =mid.second-1;
            }
            if(mat[mid.first][mid.second]<element){
                start.first=mid.first+1;
                start.second =mid.second+1;
            }
        }
        
        return false;
	}

int main(){
    vector<vector<int>> mat = {{1, 5, 6},
        {8, 10, 11},
        {15, 16, 18}};

    cout<<binarySearch2DMatrix(mat,3,1);    

    return 0;
}