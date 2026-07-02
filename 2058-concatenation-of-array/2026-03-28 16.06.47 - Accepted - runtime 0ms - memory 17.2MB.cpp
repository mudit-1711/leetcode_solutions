class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
       int i,j;
       for(i=0;i<nums.size();i++){
        ans.push_back(nums[i]);
       }
       for(i=0;i<nums.size();i++){
        ans.push_back(nums[i]);
       }
        return  ans;
    }
};