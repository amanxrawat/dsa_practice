#include <bits/stdc++.h>
using namespace std;

//   Definition for a binary tree node.

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> paths;
    vector<int> path{10,0} ;

    void solve(TreeNode *root)
    {
        if (root == NULL)
        {   
            paths.push_back(path);
            return;
        }

        path[root->val]++;
        solve(root->right);
        solve(root->left);

        path[root->val]--;
    }

    int pseudoPalindromicPaths(TreeNode *root)
    {   int ans = 0;
        solve(root);

        for(int i = 0; i<paths.size();i++){
        int oddcount=0;
            for(int j= 0 ;j<10;j++){
                if(paths[i][j]&1){
                    oddcount ++;
                }
            }
            if(oddcount<=1)ans++;
        }

        if(ans==0)return -1;
        return ans;
    

        
    }
};

void traverse(TreeNode * root){
    if(root == NULL){
        return ;
    }

    cout<<root->val;
    traverse(root->right);
    traverse(root->left);
    return ;
}

int main(){
    TreeNode* root = new TreeNode(2);
    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(1);
    TreeNode* node3 = new TreeNode(1);
    TreeNode* node4 = new TreeNode(3);
    TreeNode* node5 = new TreeNode(1);

    root->right = node1;
    root->left = node2;

    node2->right = node3;
    node2->left = node4;

    node4->left = node5;

    traverse(root);


    return 0;
}