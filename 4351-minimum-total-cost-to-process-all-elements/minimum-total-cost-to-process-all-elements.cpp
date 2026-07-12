class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long  i, j;
        const long long mod = 1e9 + 7;
        long long c = 1;
        long long r = k;
        long long ans = 0;
        for (auto x : nums) {
            if (x > r) {
                long long need = (x - r + k - 1) / k;
                __int128 sum = (__int128)need * (2 * c + need - 1) / 2;
                ans = (ans + sum) % mod;
                c += need;
                r += need * k;
            }
            r -= x;
        }
        return ans % mod;
    }
};