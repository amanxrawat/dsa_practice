#include<bits/stdc++.h>
using namespace std;

bool cycleDetDfs(unordered_map<int , set<int>> &adjlist , int  node , unordered_map<int , bool >& visited , unordered_map<int , bool> & dfsVisited ){

    visited[node] = 1;
    

    for(auto neighbour : adjlist[node]){
        if(!visited[neighbour]){
            dfsVisited[neighbour] = 1;
            bool cycle = cycleDetDfs(adjlist , neighbour , visited , dfsVisited);
            dfsVisited[neighbour] = 0;
            if(cycle) return true;
        }
        else if(dfsVisited[neighbour]){
            return true;
        }
    }
    
    return false;
}

int main(){

    unordered_map<int , set<int>> adjlist= {
        {1, {2}}, 
        {2, {3}},     
        {3, {4}},      
        {4, {3}},
        {5, {2}}      
    };

    unordered_map<int , bool >visited; 
    unordered_map<int , bool >dfvisited;

    dfvisited[1] = 1;

    bool ans = cycleDetDfs(adjlist , 1 , visited , dfvisited); 

    cout<<" the answer is " << ans << endl;

    return 0 ;
}