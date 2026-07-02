class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = 0;
        int left=0;
        int i,j;
        for(int right=0;right<nums.size();right++){
              if(nums[right]==0){
                left=right+1;
              }             
              len = max(len,right-left+1);
        }
        return len;
    }
};