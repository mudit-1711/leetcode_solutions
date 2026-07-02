class Solution {
public:
    int f(int idx, vector<int> &cost,vector<int>&dp) {
        if (idx >= cost.size())
            return 0;
        if(dp[idx]!=-1){
            return dp[idx];
        } 
        int fs = f(idx + 1, cost,dp);
        int ss = f(idx + 2, cost,dp);
        return dp[idx]= min(fs, ss) + cost[idx];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, -1);
        return min(f(0, cost, dp), f(1, cost, dp));
    }
};