class Solution {
public:
    void f(vector<vector<int>>& ans, vector<int>& v, int idx, int sum,
           vector<int> cand, int targ) {
        if (sum == targ) {
            ans.push_back(v);
            return;
        }
        if (idx == cand.size() || sum > targ)
            return;
        v.push_back(cand[idx]);
        f(ans, v, idx + 1, sum + cand[idx], cand, targ);
        v.pop_back();
        int next = idx + 1;
        while (next < cand.size() && cand[next] == cand[idx])
            next++;
        f(ans, v, next, sum, cand, targ);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        f(ans, v, 0, 0, candidates, target);
        return ans;
    }
};