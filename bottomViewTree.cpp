#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node*left;
    Node*right;
};

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(root==NULL)return ans;
        map<int,int> mp;
        
        queue< pair< Node*,int> > q;
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            
            pair< Node*,int> temp = q.front();
            q.pop();
            Node* frontEle = temp.first;
            int hd = temp.second;
            
            mp[hd]=frontEle->data;
            
            if(frontEle->left){
                q.push(make_pair(frontEle->left,hd-1));
            }
            
            if(frontEle->right){
                q.push(make_pair(frontEle->right,hd+1));
            }
            
        }
        
        for(auto i: mp){
            ans.emplace_back(i.second);
        }
        
        return ans;
        
    }
};


int main(){

    return 0;
}