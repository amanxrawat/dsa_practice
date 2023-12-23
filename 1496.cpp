#include <bits/stdc++.h>
#include<string>

using namespace std;

bool isPathCrossing(string path){
    unordered_set<string> visited;
    int x = 0;
    int y = 0;
    string currentPosition = to_string(x) + "," + to_string(y);
    visited.insert(currentPosition);

    for(int i = 0; i < path.size(); i++){
        if(path[i] == 'E'){
            x++;
        }
        else if(path[i] == 'W'){
            x--;
        }
        else if(path[i] == 'N'){
            y++;
        }
        else{
            y--;
        }

        currentPosition = to_string(x) + "," + to_string(y);
        if(visited.find(currentPosition) != visited.end()){
            return true; // Path crosses itself
        }
        visited.insert(currentPosition);
    }
    return false; // Path does not cross itself
}


// bool isPathCrossing(string path){
//     vector<pair<int,int>> temp;
//     int x = 0;
//     int y = 0;
//     temp.push_back({x,y});

//     for(int i = 0 ; i<path.size() ; i++){
//         if(path[i] == 'E'){
//             x++;
//             if(find(temp.begin(), temp.end(),(x,y))==temp.end())return false;
//             temp.push_back({x,y});
//         }
//         else if(path[i] == 'W'){
//             x--;
//             if(find(temp.begin(), temp.end(),(x,y))==temp.end())return false;
//             temp.push_back({x,y});
//         }
//         else if(path[i] == 'N'){
//             y++;
//             if(find(temp.begin(), temp.end(),(x,y))==temp.end())return false;
//             temp.push_back({x,y});
//         }
//         else{
//             y--;
//             if(find(temp.begin(), temp.end(),(x,y))==temp.end())return false;
//             temp.push_back({x,y});
//         }
//     }
//     return true;
// }

// in this code we don't need to check in every if else instead cheack at the end and push also at the end.

int main()
{

    return 0;
}