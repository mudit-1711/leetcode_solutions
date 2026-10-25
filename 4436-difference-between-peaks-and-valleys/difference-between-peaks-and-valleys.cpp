class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int sum=0,diff=0,i,j;
        for(i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                sum+=nums[i];
            }
        }
        for(i=1;i<nums.size()-1;i++){
            if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
                diff+=nums[i];
            }
        }
        return sum-diff;
    }
};