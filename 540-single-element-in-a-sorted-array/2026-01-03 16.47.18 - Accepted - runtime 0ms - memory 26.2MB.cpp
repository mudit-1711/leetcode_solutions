class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0,i;
        for(i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};