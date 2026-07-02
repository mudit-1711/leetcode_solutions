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
    void pre(Node* n,vector<int>&v){
        if(n==NULL)return ;
        int i,j;
        v.push_back(n->val);
        for(auto x : n->children){
            pre(x,v);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int>v;
        pre(root,v);
        return v;
    }
};