class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int i, j, n = nums.size();
        vector<int> prefixgcd(n);
        int mx = -1;
        for (i = 0; i < n; i++) {
            mx = max(nums[i], mx);
            prefixgcd[i] = __gcd(mx, nums[i]);
        }
        sort(prefixgcd.begin(), prefixgcd.end());
        i = 0;
        j = n - 1;
        long long ans = 0;
        while (i < j) {
            ans += __gcd(prefixgcd[i], prefixgcd[j]);
            i++;
            j--;
        }
        return ans;
    }
};