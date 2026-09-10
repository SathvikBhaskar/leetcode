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
    void solve(TreeNode* node, string path,vector<string>& ans){
        if(node==nullptr)return;
        path+=to_string(node->val);
        if(node->left==nullptr && node->right==nullptr){
            ans.push_back(path);
            return;
        }
        path+="->";
        solve(node->left,path,ans);
        solve(node->right,path,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        solve(root,"",ans);
        return ans;
    }
};