class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int m = nums[n / 2];
        int x = 0;
        for (int i = 0; i < n; i++) {
            x+=abs(nums[i]-m);
        }
        return x;
    }
};