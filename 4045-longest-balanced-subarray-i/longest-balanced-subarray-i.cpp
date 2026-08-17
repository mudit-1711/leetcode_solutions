class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int i, j;
        int ans = 0;
        for (i = 0; i < nums.size(); i++) {
            int len=0;
            unordered_set<int> even, odd;
            for (j = i; j < nums.size(); j++) {
                len++;
                if (nums[j] % 2 == 0)
                    even.insert(nums[j]);
                else
                    odd.insert(nums[j]);
                if (even.size() == odd.size()) {
                ans = max(ans, len);
            }
            }
        }
        return ans;
    }
};