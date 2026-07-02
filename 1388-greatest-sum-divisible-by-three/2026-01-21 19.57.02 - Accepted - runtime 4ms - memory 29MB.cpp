class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int i, sum = 0,ans=0;
        for (i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        if (sum % 3 == 0) {
            return sum;
        }
        sort(nums.begin(), nums.end());
        int rem = sum%3;
        for(i=0;i<nums.size();i++){
            if(nums[i]%3==rem){
                ans= sum - nums[i];
                break;
            }
        }
        int removesum =0,count=0;
        for(i=0;i<nums.size()&&count<2;i++){
            if(nums[i]%3==(3-rem)){
                removesum+=nums[i];
                count++;
            }
        }
        if(count==2) ans=max(ans,sum-removesum);
        return ans ;
    }
};