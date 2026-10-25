class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
        long long ans=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=mink&&nums[i]<=maxk){
                k++;
                ans+=k;
                
            }else{
                k=0;
            }
        }
        return ans;
    }
};