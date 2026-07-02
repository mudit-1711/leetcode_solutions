class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>> s;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    s.insert({min(nums[i], nums[j]),
                              max(nums[i], nums[j])});
                }
            }
        }

        return s.size();
    }
};