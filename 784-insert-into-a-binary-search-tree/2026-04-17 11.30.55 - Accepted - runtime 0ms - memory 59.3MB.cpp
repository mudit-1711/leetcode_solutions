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
    TreeNode* insertIntoBST(TreeNode* root, int va) {
        if(root==NULL){
            return new TreeNode(va);
        }
        if(va<root->val){
            root->left= insertIntoBST(root->left,va);
        }else{
            root->right = insertIntoBST(root->right,va);
        }
        return root;
    }
};