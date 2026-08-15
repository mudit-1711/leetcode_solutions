class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int i,j;
        int xori=0;
        bool nonzero = false;
        for(auto x : nums){
            xori^=x;
            if(x!=0)nonzero=true;
        }
        if(xori!=0)return nums.size();
        if(nonzero)return nums.size()-1;
        return 0;
    }
};