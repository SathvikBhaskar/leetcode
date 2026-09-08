/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int path(TreeNode* root,int &x){
        if(root==nullptr)return 0;
        int l=path(root->left,x);
        int r=path(root->right,x);
        x=max(x,l+r+1);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int x=0;
        path(root,x);
        return x-1;
    }
};