class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int i,j,n=nums.size();
        int ans=0,best=0;
        for(i=k;i<n;i++){
            best=max(best,nums[i-k]);
            ans=max(ans,best+nums[i]);
        }
        return ans;
    }
};