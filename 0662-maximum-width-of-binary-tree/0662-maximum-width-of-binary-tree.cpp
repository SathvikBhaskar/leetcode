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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;
        using ull=unsigned long long;
        queue<pair<TreeNode*,ull>>q;
        q.push({root,0});
        ull ans=0;
        while(!q.empty()){
            int size=q.size();
            ull firstIndex=q.front().second;
            ull first=0;
            ull last=0;
            for(int i=0;i<size;i++){
                auto [node,index]=q.front();
                q.pop();
                ull currIndex=index-firstIndex;
                if(i==0)first=currIndex;
                if(i==size-1)last=currIndex;
                if(node->left!=nullptr)q.push({node->left,currIndex*2+1});
                if(node->right!=nullptr)q.push({node->right,currIndex*2+2});
            }
            ans=max(ans,last-first+1);
        }
        return (int)ans;
    }
};