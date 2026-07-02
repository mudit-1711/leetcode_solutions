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
     void solve(TreeNode* node , vector<int>&v){
        if(node==NULL)return;
        solve(node->left,v);
        v.push_back(node->val);
        solve(node->right,v);
     }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        solve(root,ans);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};