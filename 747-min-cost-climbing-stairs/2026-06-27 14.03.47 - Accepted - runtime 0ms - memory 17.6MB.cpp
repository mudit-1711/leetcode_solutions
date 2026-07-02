class Solution {
public:
    // int f(int idx, vector<int> &cost,vector<int>&dp) {
    //     if (idx >= cost.size())
    //         return 0;
    //     if(dp[idx]!=-1){
    //         return dp[idx];
    //     } 
    //     int fs = f(idx + 1, cost,dp);
    //     int ss = f(idx + 2, cost,dp);
    //     return dp[idx]= min(fs, ss) + cost[idx];
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(),i,j;
        vector<int> dp(n + 2, -1);
        dp[n]=0;
        dp[n+1]=0;
        for(i=n-1;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
        //return min(f(0, cost, dp), f(1, cost, dp));
    }
};