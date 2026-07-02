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
    vector<int> largestValues(TreeNode* root) {
        vector<vector<int>> lo;
        vector<int> ans;
        int i, j;
        if (root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> v;
            int s = q.size();
            for (i = 0; i < s; i++) {
                TreeNode* node = q.front();
                q.pop();
                v.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            lo.push_back(v);
        }
        for(auto x : lo){
            ans.push_back(*max_element(x.begin(),x.end()));
        }
        return ans;
    }
};