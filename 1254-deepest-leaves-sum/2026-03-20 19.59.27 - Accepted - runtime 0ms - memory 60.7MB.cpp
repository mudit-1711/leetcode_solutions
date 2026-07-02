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
    void summ(TreeNode* node , int l , int &h, int &sum){
        if(node==NULL)return ;
        if(l==h)sum+=node->val;
        if(l>h){
            h=l;
            sum=node->val;
        }
        summ(node->left,l+1,h,sum);
        summ(node->right,l+1,h,sum);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h=0,sum=0,l=0;
        summ(root,l,h,sum);
        return sum;
    }
};