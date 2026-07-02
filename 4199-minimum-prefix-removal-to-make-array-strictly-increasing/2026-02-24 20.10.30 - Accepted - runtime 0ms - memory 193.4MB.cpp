class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int i,j;
        for(i=nums.size()-1;i>0;i--){
            if(nums[i]<=nums[i-1]){
                return i;
            }
        }
        return 0;
    }
};