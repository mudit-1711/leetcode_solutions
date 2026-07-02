class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int i,j;
        int cost=nums[0];
        sort(nums.begin()+1,nums.end());
        return cost + nums[1]+nums[2];
    }
};