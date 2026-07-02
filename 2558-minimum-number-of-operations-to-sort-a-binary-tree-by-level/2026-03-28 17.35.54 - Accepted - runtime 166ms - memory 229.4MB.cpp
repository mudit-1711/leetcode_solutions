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
    vector<vector<int>>solve(TreeNode* node){
        int i,j;
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        if(node==NULL)return ans;
        q.push(node);
        while(!q.empty()){
            int s = q.size();
            vector<int>v;
            for(i=0;i<s;i++){
                TreeNode* n = q.front();
                q.pop();
                v.push_back(n->val);
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
            }
            ans.push_back(v);
        }
           return ans;
    }
    int minSwaps(vector<int> &v){
        int n = v.size();
        vector<int> sorted_v = v;
        sort(sorted_v.begin(), sorted_v.end());
        unordered_map<int,int> pos;
        for(int i=0;i<n;i++){
            pos[v[i]] = i;
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(v[i] != sorted_v[i]){
                cnt++;
                int correct_val = sorted_v[i];
                int idx = pos[correct_val];
                pos[v[i]] = idx;
                pos[correct_val] = i;
                swap(v[i], v[idx]);
            }
        }
        return cnt;
    }
    int minimumOperations(TreeNode* root) {
        vector<vector<int>>v = solve(root);
        int c=0;
        for(auto x : v){
            c+=minSwaps(x);
        }
        return c;
    }
};