class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,j,k;
        int n=nums.size();
        int asum =0;
        int sum=n*(n+1)/2;
        for(i=0;i<n;i++){
            asum= asum+nums[i];
        }
        return sum - asum;
    }
};