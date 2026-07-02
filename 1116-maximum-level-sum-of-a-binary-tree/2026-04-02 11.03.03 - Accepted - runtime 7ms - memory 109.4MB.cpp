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
    int maxLevelSum(TreeNode* root) {
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
        int maxi =0;
        for(i=0;i<v.size();i++){
            if(v[i]>v[maxi]){
                maxi =i;
            }
        }
        return maxi+1;
    }
};