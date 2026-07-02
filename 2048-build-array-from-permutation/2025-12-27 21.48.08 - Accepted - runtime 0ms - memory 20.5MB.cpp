class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i;
        for(i=0;i<n;i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};