class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,i,j=0;
        int length = INT_MAX;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
          while(sum>=target){
            length = min(length,abs(i-j)+1);
            sum-=nums[j];
            j++;
          }
        }
        return length==INT_MAX ? 0:length;
    }
};