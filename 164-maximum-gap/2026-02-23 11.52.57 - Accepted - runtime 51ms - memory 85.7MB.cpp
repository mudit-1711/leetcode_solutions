class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(),nums.end());
        int left=0,right;
        int diff =0;
        while(right<nums.size()){
          right=left+1;
          diff = max(diff,nums[right]-nums[left]);
          right++;
          left++;

        }
        return diff;
    }
};