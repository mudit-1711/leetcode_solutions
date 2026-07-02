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
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> ans;
        int i,j,k;
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size  = q.size();
            vector<int>v;
            for(i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
            }
            ans.push_back(v);
        }
        int n = ans.size();
        return ans[n-1][0];
    }
};