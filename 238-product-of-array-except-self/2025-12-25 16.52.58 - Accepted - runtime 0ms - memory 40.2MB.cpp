class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i, j, n = nums.size();
        vector<int> answer(n);
        int left = 1;
        for (i = 0; i < n; i++) {
            answer[i] = left;
            left *= nums[i];
        }
        int right = 1;
        for (i = n - 1; i >= 0; i--) {
            answer[i] *= right;
            right *= nums[i];
        }
        return answer;
    }
};