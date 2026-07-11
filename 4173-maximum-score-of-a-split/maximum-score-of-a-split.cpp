class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int i, n = nums.size();
        vector<long long> pref(n, 0), suff(n, 0);
        pref[0] = nums[0];
        for (i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + nums[i];
        }
        long long mn = nums[n - 1];
        for (i = n - 1; i >= 0; i--) {
            suff[i] = min(mn, 1LL * nums[i]);
            mn = min(mn, suff[i]);
        }
        long long ans = LLONG_MIN;
        for (i = 0; i < n - 1; i++) {
            ans = max(ans, pref[i] - suff[i + 1]);
        }
        return ans;
    }
};