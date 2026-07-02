class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, n, j, m, k;
        n = nums.size();
        int ans = 0;
        for (i = 0; i < n; i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};