class Solution {
public:
    void f(vector<vector<int>>&ans,vector<int>&v,int idx,int sum,vector<int>cand,int targ){
        if(sum==targ){
            ans.push_back(v);
            return ;
        }
        if(idx == cand.size() || sum > targ)
            return;
        v.push_back(cand[idx]);
        f(ans,v,idx,sum+cand[idx],cand,targ);
        v.pop_back();
        f(ans,v,idx+1,sum,cand,targ);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        f(ans,v,0,0,candidates,target);
        return ans;
    }
};