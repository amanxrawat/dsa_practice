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
    vector<int> leafNodes(vector<int> &leaf , TreeNode*root ){
        if(root->left == NULL && root->right ==NULL){
            leaf.push_back(root->val);
            return leaf;
        }

        if(root->left != NULL)
        leafNodes(leaf,root->left);

        if(root->right !=NULL)
        leafNodes(leaf,root->right);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;

        leafNodes(leaf1 , root1);
        leafNodes(leaf2 , root2);

        if(leaf1 == leaf2){
            return true;
        }
        return false;
    }
};

int main(){
    return 0;
}