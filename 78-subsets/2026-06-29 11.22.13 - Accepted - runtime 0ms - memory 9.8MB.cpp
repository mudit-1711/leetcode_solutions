class Solution {
public:
    void f(vector<int>&nums,vector<int>&v,int idx,vector<vector<int>>&ans){
        if(idx==nums.size()){
            ans.push_back(v);
            return ;
        }
        v.push_back(nums[idx]);
        f(nums,v,idx+1,ans);
        v.pop_back();
        f(nums,v,idx+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        f(nums,v,0,ans);
        return ans;
    }
};