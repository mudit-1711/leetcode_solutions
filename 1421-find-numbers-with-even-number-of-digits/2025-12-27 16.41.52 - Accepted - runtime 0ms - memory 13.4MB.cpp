class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int i, j;
        for (i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int digits = 0;
            while (n > 0) {
                digits++;
                n = n / 10;
            }
            if (digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};