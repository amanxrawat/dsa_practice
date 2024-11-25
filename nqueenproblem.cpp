#include<bits/stdc++.h>
using namespace std;

void addAnswer(vector<vector<int>> & board ,vector<vector<int>> & ans , int n){
    vector<int > temp;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            temp.push_back(board[i][j]);
        }   

    }

    ans.push_back(temp);
}

bool isSafe(vector<vector<int>> board , int n , int col , int row){

    int x = row;
    int y = col ;

    // check for col

    while(row >= 0 ){
        if(board[x][y] == 1 ){
            return false;
        }
        col --;
    }

    // check for upper diagonal 
    x = row ;
    y = col ;

    while(x>=0 and y>=0){
        if(board[x][y]==1){
            return false;
        }   
        x--;
        y--;
    }



    // check for lower diagonal

    x = row ;
    y = col ;

    while(x < n and y <= 0){
        if(board[x][y] == 1){
            return false;
        }

        x++;
        y--;

    }

    return true;

}

void solve(vector<vector<int>> & board ,vector<vector<int>> & ans , int n , int col){
    
    // base case
    if(col == n){
        addAnswer(board , ans , n);
        return ; 
    }


    for(int row = 0 ; row < n ; row++){

        if((isSafe(board,n ,col , row ))){

            board[row][col] = 1;
            solve(board , ans , n , col+1);
            board[row][col] = 0;
        }

    }

    return;

}


vector<vector<int> > nQueens(int n ){
    vector<vector<int>> board(n , vector<int>(n,0));
    vector<vector<int>> ans;

    solve(board , ans , n , 0);

    return ans;
}



int main(){
    return 0 ;
}