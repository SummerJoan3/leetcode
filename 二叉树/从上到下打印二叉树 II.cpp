/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root)return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> l;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* cur=q.front();
                q.pop();
                l.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            v.push_back(l);
        }
        return v;
    }
};