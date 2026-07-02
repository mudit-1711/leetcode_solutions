class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i, j = 0;
        int sum = 0;
        int ans = INT_MAX;
        for (i = 0; i < nums.size(); i++) {
            while (j - i + 1 < k) {
                j++;
            }
            if (j < nums.size()) {
                ans = min(ans, nums[j] - nums[i]);
            }
        }

        return ans;
    }
};