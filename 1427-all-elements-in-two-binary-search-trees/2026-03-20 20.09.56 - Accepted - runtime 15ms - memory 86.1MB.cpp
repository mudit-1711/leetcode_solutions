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
    void solve(TreeNode* node ,vector<int>&v){
        if(node==NULL)return;
        v.push_back(node->val);
        solve(node->left,v);
        solve(node->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        solve(root1,ans);
        solve(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};