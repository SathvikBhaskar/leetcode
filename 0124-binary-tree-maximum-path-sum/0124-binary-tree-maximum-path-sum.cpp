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
private:
    int sum=INT_MIN;
    int solve(TreeNode* root){
        if(root==nullptr)return 0;
        int leftsum=max(0,solve(root->left));
        int rightsum=max(0,solve(root->right));
        sum=max(sum,root->val+leftsum+rightsum);
        return root->val+max(leftsum,rightsum);
    }
public:
    int maxPathSum(TreeNode* root) {
        solve(root);
        return sum;
    }
};