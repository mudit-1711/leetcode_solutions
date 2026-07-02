class Solution {
public:
    int arraySign(vector<int>& nums) {
        int i, n = 0, j;
        long long pro = 1;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return 0;
            } else if (nums[i] < 0) {
                n++;
            }
        }
        if (n % 2 == 0) {
            return 1;
        } else {
            return -1;
        }
    }
};