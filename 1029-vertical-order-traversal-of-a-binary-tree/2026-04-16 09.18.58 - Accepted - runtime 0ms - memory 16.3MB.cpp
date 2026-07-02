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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mpp;    // vertical ,level  , value
        queue<pair<TreeNode*, pair<int, int>>> q; // node , vertical , level
        int i, j, k;
        q.push({root, {0, 0}});
        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            int v = p.second.first;
            int l = p.second.second;
            mpp[v][l].insert(node->val);
            if (node->left) {
                q.push({node->left, {v - 1, l + 1}});
            }
            if (node->right) {
                q.push({node->right, {v + 1, l + 1}});
            }
        }
        vector<vector<int>> ans;
        for (auto x : mpp) {
            vector<int> temp;
            for (auto y : x.second) {
                for (auto z : y.second) {
                    temp.push_back(z);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};