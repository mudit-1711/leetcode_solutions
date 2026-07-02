class Solution {
public:
    // int f(int idx,vector<int>&nums,vector<int>&dp){
    //     if(idx>=nums.size())return 0;
    //     if(dp[idx]!=-1)return dp[idx];
    //     int take = nums[idx] + f(idx + 2, nums,dp);
    //     int skip = f(idx + 1, nums,dp);
    //     return dp[idx]=max(take, skip);
    // }
    int rob(vector<int>& nums) {
        int i,j;
        int n = nums.size();
        vector<int>dp(n+2,0);
        for(i=n-1;i>=0;i--){
            int take = nums[i]+dp[i+2];
            int skip= dp[i+1];
            dp[i]=max(take,skip);
        }
        return dp[0];
    }
};