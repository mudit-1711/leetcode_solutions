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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long > v;
        int i,j;
        queue<TreeNode*>q;
        if(root==NULL)return 0;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            long long sum =0;
            for(i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                sum+=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            v.push_back(sum);
        }
        sort(v.rbegin(),v.rend());
        if(v.size()<k)return -1;
        return v[k-1];
    }
};