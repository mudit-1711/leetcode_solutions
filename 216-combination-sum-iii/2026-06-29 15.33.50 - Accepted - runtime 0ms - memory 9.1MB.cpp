class Solution {
public:
    void f(vector<vector<int>>& ans, int k, int n, vector<int>& v, int idx, int sum) {
        if (v.size()== k && sum == n) {
            ans.push_back(v);
            return;
        }
        if(idx>9)return ;
        v.push_back(idx);
        f(ans,k,n,v,idx+1,sum+idx);
        v.pop_back();
        f(ans,k,n,v,idx+1,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;
        f(ans,k,n,v,1,0);
        return ans;
    }
};