class Solution {
public:
    int getMinDistance(vector<int>& nums, int t, int s) {
        int i,j,k;
        int ans = INT_MAX;
        for(i=0;i<nums.size();i++){
            if(nums[i]==t){
                int c = abs(i - s);
                ans = min(c, ans);
            }
        }
        return ans;
    }
};