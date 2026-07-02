class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j,ans=INT_MIN,n=nums.size();
        if(nums.size()==1)return nums[0];
        for(i=0;i<n;i++){
            int pro =1;
            for(j=i;j<n;j++){
                pro*=nums[j];
                ans=max(ans,pro);
            }
        }
        return ans;
    }
};