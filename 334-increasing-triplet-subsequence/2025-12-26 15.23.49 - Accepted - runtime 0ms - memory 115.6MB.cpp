class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long long i, j;
        long long f = INT_MAX;
        long long s = INT_MAX;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] <= f) {
                f = nums[i];
            } else if (nums[i] <= s) {
                s = nums[i];
            } else {
                return true;
            }
        }
        return false;
    }
};