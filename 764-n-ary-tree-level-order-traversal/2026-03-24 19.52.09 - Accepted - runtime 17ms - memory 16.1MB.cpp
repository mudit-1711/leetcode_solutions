/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        int i, j;
        vector<vector<int>> ans;
        queue<Node*> q;
        if (root == NULL)
            return ans;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> v;
            for (i = 0; i < size; i++) {
                Node* n = q.front();
                q.pop();
                v.push_back(n->val);
                for (auto child : n->children) {
                    if (child) q.push(child);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};