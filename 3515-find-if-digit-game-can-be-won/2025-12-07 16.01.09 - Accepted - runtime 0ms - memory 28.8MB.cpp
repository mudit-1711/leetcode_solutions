class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int i, j, m;
        int n = nums.size();
        int s = 0, d = 0;
        for (i = 0; i < n; i++) {
            if (nums[i] > 9) {
                d += nums[i];
            } else {
                s += nums[i];
            }
        }
        if (s != d) {
            return true;
        } else {
            return false;
        }
    }
};