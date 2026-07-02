class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> it;
        for (int x : nums) {
            it.insert(x);
        }
        int i = 0;
        for (int x : it) {
            nums[i] = x;
            i++;
        }
        return i;
    }
};