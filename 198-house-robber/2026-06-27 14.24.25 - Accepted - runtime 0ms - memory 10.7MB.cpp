class Solution {
public:
    int f(int idx,vector<int>&nums,vector<int>&dp){
        if(idx>=nums.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        int take = nums[idx] + f(idx + 2, nums,dp);
        int skip = f(idx + 1, nums,dp);
        return dp[idx]=max(take, skip);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return f(0,nums,dp);
    }
};