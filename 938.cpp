#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
private:
    int totalCount(TreeNode* root , int low , int high , int &count){
        if(root == NULL){
            return count;
        }
        // processing 
        if(root->val <= high && root->val >= low){
            count += root->val;
        }
        // right node 
        totalCount(root->right , low , high ,count);


        // left node
        totalCount(root->left , low , high ,count);
        return count;
    }
    
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int count = 0 ;
        return totalCount(root , low , high ,count);
    }
};