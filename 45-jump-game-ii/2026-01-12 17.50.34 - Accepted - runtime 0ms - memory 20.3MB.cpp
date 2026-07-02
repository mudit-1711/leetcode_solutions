class Solution {
public:
    int jump(vector<int>& nums) {
        int maxr = 0, i, end = 0;
        int jump = 0;
        for (i = 0; i < nums.size()-1; i++) {
            maxr = max(maxr, i + nums[i]);
            if (i == end) {
                jump++;
                end = maxr;
            }
            
        }
        return jump;
    }
};