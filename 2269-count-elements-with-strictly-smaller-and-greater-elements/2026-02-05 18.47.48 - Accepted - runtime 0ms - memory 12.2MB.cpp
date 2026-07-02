class Solution {
public:
    int countElements(vector<int>& nums) {
        int i, j = 0;
        sort(nums.begin(), nums.end());
        int mini = nums[0];
        int maxi = nums[nums.size() - 1];
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] > mini && nums[i] < maxi) {
                j++;
            }
        }
        return j;
    }
};