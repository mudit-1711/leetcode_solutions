class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int i, j, ans = 0;
        if (nums.size() <= 2)
            return nums.size();
        for (i = 0; i < nums.size(); i++) {
            ans |= nums[i];
        }
        return ans+1;
    }
};