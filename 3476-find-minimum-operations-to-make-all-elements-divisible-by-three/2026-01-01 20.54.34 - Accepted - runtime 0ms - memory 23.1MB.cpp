class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op = 0;
        int i, j;
        for (i = 0; i < nums.size(); i++) {
            op += min(nums[i] % 3, 3 - (nums[i] % 3));
        }
        return op;
    }
};