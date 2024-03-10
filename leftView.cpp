#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*left;
    Node*right;
};


vector<int> leftView(Node *root)
{
   queue<Node*> q;
   q.push(root);
   vector<int> ans;
   if(root== NULL)return ans;
   
   while(!q.empty()){
      
      int size = q.size();
      vector<int> temp;
      
        for(int i = 0 ;i<size ; i++){
          
            Node* front = q.front();
            q.pop();
              
            temp.emplace_back(front->data);
              
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }    
        
        ans.emplace_back(temp[0]);
        temp.clear();
    }
      
      return ans;
}

int main(){

    return 0;
}