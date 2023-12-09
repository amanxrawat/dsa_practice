// inorder traversal of a binary tree
#include <iostream>
#include <vector>
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

vector<int> inorder(TreeNode *root, vector<int> &ans)
{
    if (root == nullptr)
    {
        return ans;
    }

    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);

    return ans;
}

int main(){
    return 0;
}