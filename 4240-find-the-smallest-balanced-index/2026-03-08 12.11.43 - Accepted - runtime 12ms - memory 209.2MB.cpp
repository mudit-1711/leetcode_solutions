class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int ans = -1, n = nums.size();
        vector<long long> prefixsum(n);
        prefixsum[0] = nums[0];
        for (int i = 1; i < n; i++)
            prefixsum[i] = nums[i] + prefixsum[i - 1];

        unsigned long long prod = 1;
        for (int i = n - 1; i >= 1; i--) {
            if (prefixsum[i - 1] == prod) {
                ans = i;
            }

            if (prod > prefixsum[n - 1])
                break;

            prod = prod * nums[i];
        }

        return ans;
    }
};