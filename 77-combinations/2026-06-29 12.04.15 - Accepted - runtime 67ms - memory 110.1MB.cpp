class Solution {
public:
    void f(vector<vector<int>>& ans, vector<int>& v, int idx, int n, int k) {
        if(v.size() == k){
            ans.push_back(v);
            return;
        }
        if(idx > n)
            return;
        v.push_back(idx);
        f(ans, v, idx + 1, n, k);
        v.pop_back();
        f(ans, v, idx + 1, n, k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        f(ans, v, 1, n, k);
        return ans;
    }
};