class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i, j, m;
        int n = nums.size();

        for (i = 0; i < n; i++) {
            int count = 0;
            for (j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > n / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};