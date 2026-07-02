class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int p=0;
        int i,j,c;
        for(j=0;j<nums.size();j++){
            for(i=0;i<nums.size();i++){
                if(nums[j]==nums[i]&&i<j){
                    p++;
                }
            }
        }
        return p;
    }
};