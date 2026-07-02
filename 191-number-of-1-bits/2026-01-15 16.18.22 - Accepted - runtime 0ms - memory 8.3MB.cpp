class Solution {
public:
    int hammingWeight(int n) {
        int ans = __builtin_popcount(n);
        return ans;
    }
};