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
    map<int,map<int,multiset<int>>>mp;
    void solve(TreeNode* root,int row,int col){
        if(root==nullptr)return;
        mp[col][row].insert(root->val);
        solve(root->left,row+1,col-1);
        solve(root->right,row+1,col+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);
        vector<vector<int>>ans;
        for(auto& col:mp){
            vector<int>current;
            for(auto& row:col.second){
                for(int value:row.second)current.push_back(value);
            }
            ans.push_back(current);
        }
        return ans;
    }
};