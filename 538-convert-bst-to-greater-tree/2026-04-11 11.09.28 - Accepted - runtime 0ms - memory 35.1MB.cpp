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
int sum = 0;
    void tra(TreeNode* node){
        if(node == NULL) return;
            tra(node->right);
            sum+=node->val;
            node->val = sum;
            tra(node->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        tra(root);
        return root;
    }
};