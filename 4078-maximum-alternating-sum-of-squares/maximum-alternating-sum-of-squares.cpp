class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long i, j, ans = 0, n = nums.size();
        for (auto& x : nums) {
            if (x < 0)
                x = abs(x);
        }
        sort(nums.begin(), nums.end());
        for (i = n / 2; i < n; i++) {
            ans += 1LL * (nums[i] * nums[i]);
        }
        for (i = 0; i < n / 2; i++) {
            ans -= 1LL * (nums[i] * nums[i]);
        }

        return ans;
    }
};