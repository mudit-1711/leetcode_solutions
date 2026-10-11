class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0, i, j,n=nums.size();
        for (i = 0; i < n; i++) {
            if (n% (i+1) == 0)
                ans += nums[i] * nums[i];
        }
        return ans;
    }
};