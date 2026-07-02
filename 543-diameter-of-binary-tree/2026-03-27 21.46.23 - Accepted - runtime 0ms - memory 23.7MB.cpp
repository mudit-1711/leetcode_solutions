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
    int voov(TreeNode* node, int& m) {
        if (node == NULL)
            return 0;
        int l = voov(node->left, m);
        int r = voov(node->right, m);
        m = max(m, l + r);
        return 1 + max(l, r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        voov(root, d);
        return d;
    }
};