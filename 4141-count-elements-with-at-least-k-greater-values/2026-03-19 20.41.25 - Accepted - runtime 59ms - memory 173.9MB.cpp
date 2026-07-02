class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        int i, j;
        if (k == 0)
            return n;
        sort(nums.begin(), nums.end());
        int maxi = nums[n - k];
        int ans = 0;
        for (i = 0; i < n; i++) {
            if (nums[i] <maxi)
                ans++;
        }
        return ans;
    }
};