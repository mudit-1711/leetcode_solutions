class Solution {
public:
    int minMoves(vector<int>& nums) {
        int i,ans=0;
        int mx = *max_element(nums.begin(),nums.end());
        for(auto x : nums){
            ans+=abs(x-mx);
        }
        return ans;
    }
};