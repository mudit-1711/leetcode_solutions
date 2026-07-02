class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0;
        int i;
        for(i=0;i<nums.size();i++){
            if(maxreach<i){
                return false;
            }
            maxreach = max(maxreach , i+nums[i]);
        }
        return true;
    }
};