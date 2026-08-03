class Solution {
public:
    int f(vector<int>&s,vector<int>&dp,int i){
        if(i>=s.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int ans = INT_MIN;
        int sum=0;
        for(int j = 0;j<3&&(i+j)<s.size();j++){
            sum+=s[i+j];
            ans=max(ans,sum-f(s,dp,i+j+1));
        }
        return dp[i]=ans;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        vector<int>dp(stoneValue.size(),-1);
        int diff = f(stoneValue,dp,0);
        if(diff>0)return "Alice";
        if(diff<0)return "Bob";
        return "Tie"; 
    }
};