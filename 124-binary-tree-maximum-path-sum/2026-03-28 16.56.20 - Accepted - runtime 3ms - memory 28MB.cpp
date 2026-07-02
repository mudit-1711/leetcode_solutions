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
    int voov (TreeNode* node , int&maxi){
        if(node==NULL)return 0;
        int l = max(0,voov(node->left,maxi));
        int r = max(0,voov(node->right,maxi));
        maxi = max(maxi,node->val+l+r);
        return max(l,r) + node->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
voov(root,maxi);
return maxi;
    }
};