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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int i,j;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
        q.push(root);
        int flag=0;
        while(!q.empty()){
           int s = q.size();
           vector<int>v;
           for(i=0;i<s;i++){
            TreeNode* node = q.front();
              q.pop();
              v.push_back(node->val);
              if(node->left)q.push(node->left);
              if(node->right)q.push(node->right);
           }
           if(flag==1){
            reverse(v.begin(),v.end());
            flag=0;
            ans.push_back(v);
           }else{
           ans.push_back(v);
           flag =1;
           }
        }
        return ans;
    }
};