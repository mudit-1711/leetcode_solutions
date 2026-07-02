class Solution {
public:
    int i, j;
    vector<int> v;
    Solution(vector<int>& nums) { v = nums; }

    int pick(int target) {
        vector<int>temp;
        for (i = 0; i < v.size(); i++) {
            if (v[i] == target) {
                 temp.push_back(i);
            }
        }
        return temp[rand()%temp.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */