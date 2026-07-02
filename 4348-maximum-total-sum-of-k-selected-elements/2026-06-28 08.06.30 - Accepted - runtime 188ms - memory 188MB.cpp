class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int i = 0, j;
        long long ans = 0;
        sort(nums.rbegin(), nums.rend());
        while (i < k && mul > 1) {
            ans += 1LL * mul * nums[i];
            i++;
            mul--;
        }
        while(i<k){
            ans+=nums[i];
            i++;
        }
        return ans;
    }
};