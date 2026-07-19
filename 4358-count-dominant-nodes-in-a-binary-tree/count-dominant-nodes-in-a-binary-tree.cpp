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
    int ans =0;
    int f(TreeNode* root){
        if(root==NULL)return INT_MIN;
        int left = f(root->left);
        int right = f(root->right);
        int mx = max(root->val,max(left,right));
        if(mx==root->val)ans++;
        return mx;
    }
    int countDominantNodes(TreeNode* root) {
        f(root);
        return ans;
    }
};