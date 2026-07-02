class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g =0;
        int i;
        for(i=0;i<nums.size();i++){
            g = gcd(g,nums[i]);
        }
        return g==1;
    }
};