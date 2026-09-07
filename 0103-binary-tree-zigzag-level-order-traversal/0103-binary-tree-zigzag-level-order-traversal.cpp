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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int ltor=1;
        while(!q.empty()){
            int levelsize=q.size();
            vector<int>level(levelsize);
            if(ltor){
                for(int i=0;i<levelsize;i++){
                    TreeNode* node=q.front();
                    q.pop();
                    level[i]=node->val;
                    if(node->left!=nullptr)q.push(node->left);
                    if(node->right!=nullptr)q.push(node->right);
                }
            }else{
                for(int i=levelsize-1;i>=0;i--){
                    TreeNode* node=q.front();
                    q.pop();
                    level[i]=node->val;
                    if(node->left!=nullptr)q.push(node->left);
                    if(node->right!=nullptr)q.push(node->right);
                }
            }
            ans.push_back(level);
            ltor^=1;
        }
        return ans;
    }
};