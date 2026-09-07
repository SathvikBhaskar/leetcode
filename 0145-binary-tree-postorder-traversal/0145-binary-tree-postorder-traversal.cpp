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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)return ans;
        stack<TreeNode*>st;
        TreeNode* current=root;
        TreeNode* visited=nullptr;
        while(current!=nullptr || !st.empty()){
            while(current!=nullptr){
                st.push(current);
                current=current->left;
            }
            TreeNode* node=st.top();
            if(node->right!=nullptr && visited!=node->right)current=node->right;
            else{
                ans.push_back(node->val);
                visited=node;
                st.pop();
            }
        }
        return ans;
        
    }
};