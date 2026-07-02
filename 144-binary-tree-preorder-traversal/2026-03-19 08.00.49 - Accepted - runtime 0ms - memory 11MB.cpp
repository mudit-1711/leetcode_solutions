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
     void pre(TreeNode* Node, vector<int>&v){
         if(Node==NULL) return;
         v.push_back(Node->val);
         pre(Node->left,v);
         pre(Node->right,v);
     }
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>v;
        pre(root,v);
            return v;
    }
};