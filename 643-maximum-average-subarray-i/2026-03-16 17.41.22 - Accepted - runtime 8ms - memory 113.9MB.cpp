class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     double i,j,sum=0;
        for(i=0;i<k;i++){
            sum+=nums[i];
        }
        double ans =sum;
        for(i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            ans =max(ans,sum);
        }
        return ans/k;
    }
};