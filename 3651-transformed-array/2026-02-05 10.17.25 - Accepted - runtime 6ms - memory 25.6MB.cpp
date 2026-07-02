class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n =nums.size();
        vector<int>result(n);
        int i,j;
        for(i=0;i<nums.size();i++){
            int target = ((i+nums[i])%n +n)%n;
            result[i]=nums[target];
        }
        return result;
    }
};