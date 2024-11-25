#include<bits/stdc++.h>
using namespace std;

void prepareAdjlist(unordered_map<int , set<int>> & adjlist ,vector<pair<int , int>> & edges){
    for(auto i : edges){
        int u = i.first;
        int v = i.second;

        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}

void bfs( unordered_map<int , set<int>> & adjlist ,unordered_map<int, bool> & visited, vector<int> & ans , int node  ){

    queue<int> q;
    q.push(node);
    visited[node] = 1 ;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        ans.push_back(front);
        // traversel all nodes neighbour

        for(auto i : adjlist[front]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1
            }
        }

    }

}

vector<int> BFSTraversal(int vertex , vector<pair<int , int>> edges){
    // creating adj list 
    unordered_map<int , set<int>> adjlist;
    vector<int> ans;
    unordered_map<int, bool> visited;


    prepareAdjlist(adjlist , edges );

    for(auto i : adjlist){
        if( !visited[i.first]){
            bfs(adjlist ,visited , ans , i.first  );
        }
    }

}

int main(){

    return 0;
}