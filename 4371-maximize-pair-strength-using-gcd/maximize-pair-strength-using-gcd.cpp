class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int i, j;
        long long mx = 0;
        for (i = 0; i < nums.size(); i++) {
            for (j = 0; j < nums.size(); j++) {
                long long g =__gcd(nums[i], nums[j]);
                   long long val = (1LL*nums[i]*nums[j])/(g*g);
                mx = max(val, mx);
            }
        }
        return mx;
    }
};