class Solution {
public:
    int rob(vector<int>& nums) {
        int i,j,n=nums.size();
        vector<int>dp1(n+2,0);
        vector<int>dp2(n+2,0);
        int skip,take;
        for(i=n-2;i>=0;i--){
            take = nums[i]+dp1[i+2];
            skip = dp1[i+1];
            dp1[i]=max(take,skip);
        }
        for(i=n-1;i>=1;i--){
            take = nums[i]+dp2[i+2];
            skip = dp2[i+1];
            dp2[i]=max(take,skip);
        }
        if(nums.size()==1)return nums[0];
        return max(dp1[0],dp2[1]);
    }
};