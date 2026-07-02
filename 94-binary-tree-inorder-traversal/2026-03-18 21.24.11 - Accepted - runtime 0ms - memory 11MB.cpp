/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void od(TreeNode* node, vector<int>& v) {
        if (node == NULL) {
            return;
        }
        od(node->left, v);
        v.push_back(node->val);
        od(node->right, v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        od(root, ans);
        return ans;
    }
};